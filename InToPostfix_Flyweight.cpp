#include <cstdio>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <fstream>
#include <exception>
#include <cstring>
#include "Stack.h"
#include "InToPostfix_Flyweight.h"
#include "Flyweight_Expr_Command_Factory.h"
	
// constructor
InToPostfix_Flyweight::InToPostfix_Flyweight()
	:a(0)
{

}
// destructor
InToPostfix_Flyweight::~InToPostfix_Flyweight()
{
	
}

bool InToPostfix_Flyweight::parse_expr(const std::string & expression)
	{
		std::istringstream input (expression); // create a input stream parser
	//while loop for parsing the elements of expression
			
		try
		{
		
			Array <Expr_Command *> postfix;
			Flyweight_Expr_Command_Factory factory;
			Stack <int> s;
			if(expression!="" || expression!=" ")
			{
				infixtopostfix(expression,factory,postfix);
			
				for (size_t i = 0; i < postfix.size(); i++)
				{
					postfix[i]->execute(s);
					if(postfix[i]->commandtype()=="n")
					{
						delete postfix[i];
					}
				}
				 a=s.top();
				s.pop(); 
				getvalue();
			}
			return true;
		}
		catch(...)
		{
			throw;			
			return false;
		}
	}
	
	int InToPostfix_Flyweight::getvalue()
	{
		return a;
	}

	// 
	void InToPostfix_Flyweight::infixtopostfix(const std::string & infix,Expr_Command_Factory & factory,Array <Expr_Command *> & postfix)
	{
		int k=0;
		for (size_t i = 0; i < infix.size(); i++)
		{
			if(infix==" " || infix=="" )
		{
			throw std::runtime_error("invalid expression1");
		}
		if(infix=="(" || infix==")")
		{
			k++;
		}
		}
		if(k%2==1)
		{
			throw std::runtime_error("invalid expression2");
		}

		// create a input stream parser
		std::istringstream input(infix); 
		// current token in string/stream
		std::string token; 
		// created command object
		Expr_Command * cmd = 0; 
		// created a stack of type Expr_Command 
		Stack <Expr_Command *> temp;
		// start of while loop
		
		while (!input.eof ()) 
		{
		  // Hitendra, the precendence method can be placed on the command since
		  // the command should know it precendence, not the calculator. The calculator
		  // is only using the precedence.
      
		  // Dr.Hill, I have placed precedence method on the command using the template method discussed in class

		  // Hitendra, you have a lot of duplicate code below for each operator. This
		  // is a bad design. Please try to get better reuse of the code across each
		  // operator.

		  // I have changed the design of the code and made better reuse of code 
    		input >> token;
			
			if(isOperator(token))
			{
				
				if (token == "+")
				{
					// creating add command
					cmd = factory.create_add_command ();
				}
				else if(token == "-")
				{
					// creating subtract command
					cmd = factory.create_subtract_command ();
				}
				else if(token == "*")
				{
					// creating multiplication command
					cmd = factory.create_mul_command ();			
				}
				else if(token == "/")
				{
					// creating division command
					cmd = factory.create_div_command ();
				}
				else if(token == "%")
				{
					// creating modulus command
					cmd = factory.create_mod_command ();
				}
				else if(!temp.is_empty() && isOperator(token)&& token!="("  && cmd->priority()<=temp.top()->priority())
				{
				cmd=temp.top();
				// resize postfix 
				postfix.resize(postfix.size()+1);
				// setting 1the result in postfix
				postfix.set(postfix.size()-1,cmd);
				temp.pop();
				}
				temp.push(cmd);
			}
			// for '(' opening parenthesis
			else if(token == "("){
				// creating opening parenthesis command
				cmd = factory.create_open_parenthesis_command();
				// pushing the cmd into the main stack
				temp.push(cmd);
			}
			// for ')' opening parenthesis
			else if(token == ")")
			{
				
				// checking temp is empty or no and popping till (
				while (!temp.is_empty() && cmd->commandtype()!="(")
				{
					cmd=temp.top();
					// resize the postfix
					postfix.resize(postfix.size()+1);
					// setting the result in postfix
					postfix.set(postfix.size()-1,cmd);
					temp.pop();
				}
				
			}
			// for operands
			else if(isNumber(token))
			{
				int v=stoi(token);				
				// create a num command
				cmd = factory.create_num_command(v);
				//resize postfix
				postfix.resize(postfix.size()+1);
				// setting the result in postfix 
				postfix.set(postfix.size()-1,cmd);
			}
			else
			{
				throw std::runtime_error("invalid expression5");
			}
 		}
		while(!temp.is_empty()) {
        //resize postfix
		postfix.resize(postfix.size()+1);
		// setting the result in postfix 
		postfix.set(postfix.size()-1,temp.top());
        temp.pop();


		}
	}

	// method for verification of operators
	bool InToPostfix_Flyweight::isOperator(std::string op)
	{
		// verifying  operators 
		if(op=="+" || op=="-" || op=="*" || op=="/"|| op=="%")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

		//chcking if operand is digit or no
	bool InToPostfix_Flyweight::isNumber(std::string op)
	{
		bool t=false;
		for(size_t i= 0;i<op.length();i++)
			{
				//checking negative no
				if (op[0]=='-')
				{
					t= false;
					break;
				}
				// checking if digit
				else if(isdigit(op[i]))
				{
					t= true;
					break;
				}
				else
				{
					t= false;
					break;
				}
			}
		return t;
	}
