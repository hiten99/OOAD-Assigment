#include "Num_Node.h"
#include "Expr_Node_Visitor.h"

///constructor
Num_Node::Num_Node()
{

}

//
// parameterized constructor 
//
Num_Node::Num_Node (int num)
	:n(num)
{

}

///destructor
Num_Node::~Num_Node()
{

}

//
// accept (Expr_Node_Visitor & v)
//
 void Num_Node ::accept (Expr_Node_Visitor & v)
{
	v.Visit_Number_Node (*this);
}
 
//
// int eval (void) 
//

int Num_Node::eval()
{
	return n;
}

// gets value of number
// int get_num_value()
//
int Num_Node::get_num_value()const
{
	return n;
}