#include"Mod_Expr_Node.h"
#include "Expr_Node_Visitor.h"

///constructor
Mod_Expr_Node::Mod_Expr_Node (void)
	:Binary_Expr_Node()
{

}

//
// parameterized contructor
// Mod_Expr_Node (Expr_Node *n1,Expr_Node *n2)
//

Mod_Expr_Node:: Mod_Expr_Node (Expr_Node *n1,Expr_Node *n2)
	:Binary_Expr_Node(n1,n2)
{

}

///destructor
Mod_Expr_Node::~Mod_Expr_Node (void)
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

void Mod_Expr_Node :: accept (Expr_Node_Visitor & v)
{
	v.Visit_Modulus_Node(*this);
}

//
// calc (int num1, int num2)
//

int Mod_Expr_Node::calc (int num1, int num2)
{
	return num1%num2;
}