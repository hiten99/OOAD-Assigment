#include <iostream>
#include <exception>
#include "Eval_Expr_Tree.h"

//
// constructor
//
Eval_Expr_Tree::Eval_Expr_Tree (void)
{

}

//
//destructor
//
Eval_Expr_Tree::~Eval_Expr_Tree (void)
{

}
//
// int result (void) const 
//
int Eval_Expr_Tree::result (void) const 
{ 
	return this->result_;
}

//
// void Visit_Addition_Node (const Add_Expr_Node & node)
//

void Eval_Expr_Tree::Visit_Addition_Node (const Add_Expr_Node & node)
{
	Eval_Expr_Tree h;
	node.get_left()->accept(h);
	int s=h.result();
	Eval_Expr_Tree h1;
	node.get_right()->accept(h1);
	int s1=h1.result();

	 result_=s1+s;

}

//
// void Visit_Subtraction_Node (const Sub_Expr_Node & node)
//

void Eval_Expr_Tree::Visit_Subtraction_Node (const Sub_Expr_Node & node)
{
	Eval_Expr_Tree h;
	node.get_left()->accept(h);
	int s=h.result();
	Eval_Expr_Tree h1;
	node.get_right()->accept(h1);
	int s1=h1.result();

	result_=s-s1;

}
//
// void Visit_Division_Node (const Div_Expr_Node & node)
//

void Eval_Expr_Tree::Visit_Division_Node (const Div_Expr_Node & node)
{
	Eval_Expr_Tree h;
	node.get_left()->accept(h);
	int s=h.result();
	Eval_Expr_Tree h1;
	node.get_right()->accept(h1);
	int s1=h1.result();
	if(s1==0)
	{
	//	delete &node;
		throw std::runtime_error("divide by zero exception");
	}
	result_=s/s1;
}


//
// void Visit_Number_Node (const Sub_Expr_Node & node)
//

void Eval_Expr_Tree::Visit_Number_Node (const Num_Node & node)
{
	result_=node.get_num_value();
}

//
// void Visit_Multiplication_Node (const Mul_Expr_Node & node)
//

void Eval_Expr_Tree::Visit_Multiplication_Node (const Mul_Expr_Node & node)
{
	Eval_Expr_Tree h;
	node.get_left()->accept(h);
	int s=h.result();

	Eval_Expr_Tree h1;
	node.get_right()->accept(h1);
	int s1=h1.result();

	result_=s*s1;

}

//
// void Visit_Modulus_Node (const Mod_Expr_Node & node)
//

void  Eval_Expr_Tree::Visit_Modulus_Node (const Mod_Expr_Node & node)
{
	Eval_Expr_Tree h;
	node.get_left()->accept(h);
	int s=h.result();

	Eval_Expr_Tree h1;
	node.get_right()->accept(h1);
	int s1=h1.result();
	
	if(s1==0)
	{
		//delete &node;
		throw std::runtime_error("modulus by zero exception");
	}
	result_=s%s1;

}

//
// void Visit_Unary_Node (const Mod_Expr_Node & node)
//

void  Eval_Expr_Tree::Visit_Unary_Node (const Unary_Expr_Node & node)
{
	Eval_Expr_Tree h;
	node.get_child()->accept(h);
	int s=h.result();

	result_=s/-1;

}