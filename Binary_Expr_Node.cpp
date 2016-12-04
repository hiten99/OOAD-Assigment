#include<iostream>
#include "Binary_Expr_Node.h"

//
// constructor
//

Binary_Expr_Node::Binary_Expr_Node (void)
	:left_(0),
	right_(0)
{

}

//
// Binary_Expr_Node (Expr_Node * n1,Expr_Node * n2)
//

Binary_Expr_Node::Binary_Expr_Node (Expr_Node * n1,Expr_Node * n2)
	:left_(n1),
	right_(n2)
{

}

//
// destructor
//

Binary_Expr_Node:: ~Binary_Expr_Node (void)
{
	if(0!=left_)
	{
		delete left_;
	}
	if(0!=right_)
	{
		delete right_;
	}
}

//
// accept (Expr_Node_Visitor & v)
//

void Binary_Expr_Node::accept (Expr_Node_Visitor & v)
{

}

//
// int eval (void) 
//

int Binary_Expr_Node:: eval (void) 
 {
	  int num1=left_->eval();
	  int num2=right_->eval();
	  int result=this->calc(num1,num2);
	  return result;
}

//
// Expr_Node*  get_left() const
//

Expr_Node* Binary_Expr_Node ::get_left() const
{
	return left_;
}

//
// Expr_Node*  get_right() const
//

Expr_Node* Binary_Expr_Node ::get_right() const
{
	return right_;
}