#include<iostream>
#include "Expr_Tree_Builder.h"

///constructor
Expr_Tree_Builder::Expr_Tree_Builder()
:a(),
	k(0),
	l(0){

}

///destructor
Expr_Tree_Builder::~Expr_Tree_Builder()
{

}

 //
 // Expr_Node get_expression (void)
 //
Expr_Node * Expr_Tree_Builder::get_expression (void) 
{
	if(k!=l)
	{
		while (!s.is_empty())
		{
			Expr_Node * temp=s.top();
			s.pop();
			delete temp;

		}
		throw std::runtime_error("invalid expression");
	}
	while (!str.is_empty())
	{
		if(str.top()=="unary")
		{
			Expr_Node* n3=s.top();
			s.pop();
			Expr_Node* n4=0;
			check_operand(str.top(),n3,n4);
			str.pop();
		}
		else
		{
			Expr_Node* n4=s.top();
			s.pop();
			Expr_Node* n3=s.top();
			s.pop();
			check_operand(str.top(),n3,n4);
			str.pop();
		}
	}
	Expr_Node * temp=s.top();
	s.pop();
	this->tree_=temp;
	return this->tree_; 
}

 //
 //  build_add_operand (void)
 //

void Expr_Tree_Builder:: build_add_operand (void)
{
	operations("+");
}

 //
 //  build_subtract_operand (void)
 //

void Expr_Tree_Builder:: build_subtract_operand (void)
{
	operations("-");
}

 //
 //  build_number (int n)
 //

void Expr_Tree_Builder:: build_number (int n)
{
	Expr_Node * temp = a.create_num_command(n);
	s.push(temp);
	
}

 //
 //  build_multiplication_operand (void)
 //
void Expr_Tree_Builder:: build_multiplication_operand(void)
{
	operations("*");
}

 //
 //  build_division_operand (void)
 //
void Expr_Tree_Builder:: build_division_operand(void)
{
	operations("/");
}

 //
 //  build_modulus_operand (void)
 //
void Expr_Tree_Builder:: build_modulus_operand(void)
{
	operations("%");
}

void Expr_Tree_Builder:: build_close_parenthesis_operand(void)
{
    std::string n3=")";
	l++;
	while (!str.is_empty() && str.top()!="(" && precedence(n3,str.top()))
	{
		Expr_Node* n4=s.top();
		s.pop();
		Expr_Node* n3=s.top();
		s.pop();
		check_operand(str.top(),n3,n4);
		str.pop();
	}
	// popping the open parenthesis
	str.pop();
}
void Expr_Tree_Builder:: build_open_parenthesis_operand(void)
{
	k++;
	std::string n3="(";
	str.push(n3);
}


//
 //  build_unary_operand (void)
 //

void Expr_Tree_Builder::build_unary_operand()
{
	operations("unary");
}

void Expr_Tree_Builder::check_operand(std::string sti,Expr_Node * n1,Expr_Node * n2)
{
	// creating commands for different operators
	if(sti=="+")
	{
		Expr_Node * temp=a.create_add_command(n1,n2);
		s.push(temp);
	}
	else if (sti=="-")
	{
		Expr_Node * temp=a.create_subtract_command(n1,n2);
		s.push(temp);
	}
	else if (sti=="*")
	{
		Expr_Node * temp=a.create_multiply_command(n1,n2);
		s.push(temp);
	}
	else if (sti=="/")
	{
		Expr_Node * temp=a.create_divide_command(n1,n2);
		s.push(temp);
	}
	else if (sti=="%")
	{
		Expr_Node * temp=a.create_modulus_command(n1,n2);
		s.push(temp);
	}
	else if (sti=="unary")
	{
		Expr_Node * temp=a.create_unary_command(n1);
		s.push(temp);
	}

}


//
// int check_weight(std::string op)
//

int Expr_Tree_Builder::check_weight(std::string op)
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
	//weight =0 for parenthesis
	else if(op=="(" || op==")")
	{
		w=0;
	}
	return w;
}

//
// bool precedence(std::string op1, std::string op2)
//
// checking precedence

bool Expr_Tree_Builder::precedence(std::string op1, std::string op2)
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

void Expr_Tree_Builder:: operations(std ::string operand ){
	// for operators and if stack is empty 
	if ( str.is_empty()) 
	{
		str.push(operand);
	}
	// if stack is not empty	
	else if (!str.is_empty())
	{
		
			while(!str.is_empty() && precedence(operand,str.top()))
			{
				if(operand=="unary")
				{
					Expr_Node* n3=s.top();
					s.pop();
					Expr_Node* n4=0;
					check_operand(str.top(),n3,n4);
					str.pop();
				}
				else
				{
					Expr_Node* n4=s.top();
					s.pop();
					Expr_Node* n3=s.top();
					s.pop();
					check_operand(str.top(),n4,n3);
					str.pop();
				}
			}
			str.push(operand);
	 
	 }
}

//
// bool isNum(std::string num)
//
// checking if its number
bool Expr_Tree_Builder:: isNum(std::string num)
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
// bool isOperator(std::string op)
//
bool Expr_Tree_Builder:: isOperator(std::string op)
{
	// verifying  operators 
	if(op=="+" || op=="-" || op=="*" || op=="/"|| op=="%" || op=="("|| op==")")
	{
		return true;
	}
	else
	{
		return false;
	}
}
