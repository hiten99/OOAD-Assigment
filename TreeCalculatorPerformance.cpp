#include <iostream>
#include <string>
#include <cstring>
#include <exception>
#include "TreeCalculatorPerformance.h"
#include "Eval_Expr_Tree.h"

//
// constructor
//

TreeCalculatorPerformance::TreeCalculatorPerformance():
	a(0)
{

}

//
// destructor
//

TreeCalculatorPerformance::~TreeCalculatorPerformance()
{

}

//
// void parse_expr (const std::string & infix)
//

bool TreeCalculatorPerformance::parse_expr (const std::string & infix)
{

  // Hitendra, there are several flaws in your solution below. (1) You
  // should be going from infix to tree. Not, infix to postfix to tree.
  // (2) Your client (this method) knows too much about the build process.
  // Each time you get a new token and learn what the token type is, you
  // are to call the correct build method on the builder. The builder then
  // keeps track of how to build the product. Per your current solution, the
  // client knows too much about the build process.

  // Dr.Hill, I have implemented as per your suggestion
	try{  

		std::istringstream input (infix); // create a input stream parser
		std::string token; // current token in string/stream
 
		Expr_Tree_Builder b;

		std::string token_temp="";
		// build operations
		while (!input.eof ())
		{
			input >> token;
		
			if(isNumber(token))
			{
				b.build_number(stoi(token));
			}
			else if(token=="+")
			{
				b.build_add_operand();
			}
			else if( token=="-" && isOperator(token_temp) )
			{
				b.build_unary_operand();
			}
			else if (token=="-")
			{
				b.build_subtract_operand();
			}
			else if (token=="*")
			{
				b.build_multiplication_operand();
			}
			else if (token=="/")
			{
				b.build_division_operand();
			}
			else if (token=="%")
			{
				b.build_modulus_operand();
			}
			else if (token=="(")
			{
				b.build_open_parenthesis_operand();
			}
			else if (token==")")
			{
				b.build_close_parenthesis_operand();
			}
			else 
			{
				std::runtime_error("invalid expression");
			}
		
			token_temp=token;		
		}
		
		build(b);
		return true;
	}
	catch(...)
	{
		throw;
	}
	
}
int TreeCalculatorPerformance::getvalue()
{
	return a;
}
//
//void build( Array<std::string> & postfix)
//

void TreeCalculatorPerformance::build(Expr_Tree_Builder &b)
{
	Expr_Node * expr_tree = b.get_expression();
	Eval_Expr_Tree eval;
	try
	{
	expr_tree->accept (eval);
	a = eval.result ();
	//std::cout<<"result:"<<result<<"\n";
	delete expr_tree;
	}
	catch(...)
	{
		delete expr_tree;
		throw;
	}
}

//
// bool isOperator(std::string op)
//
bool TreeCalculatorPerformance::isOperator(std::string op)
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

//
// int check_weight(std::string op)
//

int TreeCalculatorPerformance::check_weight(std::string op)
{ 
	int w=0;
	// weight=1 for addition ,subtraction
	if(op=="+" || op== "-")
	{
		w=1;
	}
	//weight=2 for muliplication,division,modulus
	else if(op=="*" || op=="/" || op=="%")
	{
		w=2;
	}
	//weight=3 for unary
	else if(op=="unary")
	{
		w=3;
	}
	return w;
}

//
// bool precedence(std::string op1, std::string op2)
//
// checking precedence
bool TreeCalculatorPerformance::precedence(std::string op1, std::string op2)
{
	 bool result=false;
	 int op1weight=check_weight(op1);
	 int op2weight=check_weight(op2);
	 // same weights or less return true else return false
	 if(op1weight<=op2weight)
	 {
		 result=true;
	 }
	 else
	 {
		 result=false;
	 }
	  return result;
}

//
// bool isNum(std::string num)
//
// checking if its number
bool TreeCalculatorPerformance::isNum(std::string num)
{
	bool t=false;
	if(num>="0" && num<="999")
	{
		t=true;
	}
	else
	{
		t=false;
	}
	return t;
}

//
// int get_exp()
//
// making trees and getting expression
int TreeCalculatorPerformance::get_exp()
{
	Expr_Tree_Builder tb;
	Expr_Node * expr_tree = tb.get_expression();
	Eval_Expr_Tree eval;
	try{
	expr_tree->accept (eval);
	int result = eval.result ();
	std::cout<<"result:"<<result<<"\n";
	delete expr_tree;
	return result;
	}
	catch(...){
	delete expr_tree;
	throw;
}
}
	//checking if operand is digit or no
bool TreeCalculatorPerformance::isNumber(std::string op)
{
	bool t=false;
		bool check=false;
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