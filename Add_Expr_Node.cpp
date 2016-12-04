#include<iostream>
#include"Add_Expr_Node.h"
#include "Expr_Node_Visitor.h"

//
// constructor
//
Add_Expr_Node::Add_Expr_Node (void)
	:Binary_Expr_Node()
{

}
// 
// Add_Expr_Node(Expr_Node *n1,Expr_Node *n2)
//
Add_Expr_Node:: Add_Expr_Node (Expr_Node *n1,Expr_Node *n2)
	:Binary_Expr_Node(n1,n2)
{

}

//
// destructor
//

Add_Expr_Node::~Add_Expr_Node (void)
{
  // Hitendra, this code should be placed in the binary node destructor
  // since it is responsible for managing the left/right nodes. Right now,
  // you are duplicating this logic in each concrete binary node, which
  // is not good practice.
  
  // Dr.Hill, I placed the code in binary node destructor
}

//
// accept (Expr_Node_Visitor & v)
//
void Add_Expr_Node::accept (Expr_Node_Visitor & v)
{
	v.Visit_Addition_Node (*this);
}

//
// calc (int num1, int num2)
//

int Add_Expr_Node::calc (int num1, int num2)
{
	return num1+num2;
}
