#include"Div_Expr_Node.h"
#include "Expr_Node_Visitor.h"

//
// constructor
//

Div_Expr_Node::Div_Expr_Node (void)
	:Binary_Expr_Node()
{

}
//
// Div_Expr_Node Div_Expr_Node (Expr_Node *n1,Expr_Node *n2)
//
Div_Expr_Node:: Div_Expr_Node (Expr_Node *n1,Expr_Node *n2)
	:Binary_Expr_Node(n1,n2)
{

}

//
// destructor
//

Div_Expr_Node::~Div_Expr_Node (void)
{
  // Hitendra, this code should be placed in the binary node destructor
  // since it is responsible for managing the left/right nodes. Right now,
  // you are duplicating this logic in each concrete binary node, which
  // is not good practice.
  
  // Dr.Hill, I placed the code in binary node destructor
}

/**
* accept method in vistor 
*
* @param[in]      v           visitor
* 
*/

void Div_Expr_Node :: accept(Expr_Node_Visitor & v)
{
	v.Visit_Division_Node(*this);
}

 /**
* calc method in vistor 
*
* @param[in]      num1,num2          two operands
* 
*/ 

int Div_Expr_Node::calc (int num1, int num2)
{
	return num1/num2;
}