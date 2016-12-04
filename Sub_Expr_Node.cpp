#include "Sub_Expr_Node.h"
#include "Expr_Node_Visitor.h"

/// Default constructor.

Sub_Expr_Node::Sub_Expr_Node (void)
	:Binary_Expr_Node()
{

}

/// Parameterized constructor.

Sub_Expr_Node:: Sub_Expr_Node (Expr_Node *n1,Expr_Node *n2)
	:Binary_Expr_Node(n1,n2)
{

}

///destructor

Sub_Expr_Node:: ~Sub_Expr_Node (void)
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
* @param[in]      v          visitor
* 
*/

void Sub_Expr_Node:: accept (Expr_Node_Visitor & v)
{
	v.Visit_Subtraction_Node (*this);
}

 /**
* calc method in vistor 
*
* @param[in]      num1,num2          two operands
* 
*/ 

int Sub_Expr_Node:: calc (int num1, int num2)
{
	return num1-num2;
}