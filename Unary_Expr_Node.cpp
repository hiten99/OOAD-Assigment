#include <iostream>
#include "Unary_Expr_Node.h"
#include "Expr_Node_Visitor.h"


//
// Default constructor.
//

Unary_Expr_Node:: Unary_Expr_Node(void)
	:child_(0)
{

}

//
//   Unary_Expr_Node(Expr_Node )
//

Unary_Expr_Node:: Unary_Expr_Node(Expr_Node * n1)
	:child_(n1)
{

}

//
// destructor.
//

Unary_Expr_Node:: ~Unary_Expr_Node(void)
{
	if(0!=child_)
	{
		delete child_;
	}
}

/**
* accept method in vistor 
*
* @param[in]      v         visitor
* 
*/
void Unary_Expr_Node:: accept (Expr_Node_Visitor & v)
{
	v.Visit_Unary_Node(*this);
}

//
//eval method in vistor 
// 

int Unary_Expr_Node::eval (void)
{
	int result;
	if (this->child_) 
	{
		result=this->child_->eval();
	}
	else
	{
		std::cout<<"invalid ";
	}
	return result/-1;
}

//
// Expr_Node * get_child()
//

Expr_Node * Unary_Expr_Node::get_child() const
{
	return child_;
}