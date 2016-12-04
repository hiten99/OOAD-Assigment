#include<iostream>
#include "Expr_Node_Tree_Factory.h"

///constructor
Expr_Node_Tree_Factory::Expr_Node_Tree_Factory()
{

}

///destructor
Expr_Node_Tree_Factory::~Expr_Node_Tree_Factory()
{

}

/*
*
* Num_Node create_num_command (int num)
*/
Num_Node * Expr_Node_Tree_Factory::create_num_command (int num)
{
	return new Num_Node(num);
}

//creating request for Add_Command
Add_Expr_Node * Expr_Node_Tree_Factory:: create_add_command (Expr_Node *n1,Expr_Node *n2)
{
	return new Add_Expr_Node(n1,n2);
}

//creating request for Subtract_Command
Sub_Expr_Node * Expr_Node_Tree_Factory::create_subtract_command (Expr_Node *n1,Expr_Node *n2)
{
	return new Sub_Expr_Node(n1,n2);
}

//creating request for multiply_Command
Mul_Expr_Node* Expr_Node_Tree_Factory::create_multiply_command (Expr_Node *n1,Expr_Node *n2)
{
	return new Mul_Expr_Node(n1,n2);
}

//creating request for modulus_Command
Mod_Expr_Node* Expr_Node_Tree_Factory::create_modulus_command (Expr_Node *n1 , Expr_Node *n2)
{
	return new Mod_Expr_Node(n1,n2);
}

//creating request for divide_Command
Div_Expr_Node* Expr_Node_Tree_Factory::create_divide_command (Expr_Node *n1,Expr_Node *n2)
{
	return new Div_Expr_Node(n1,n2);
}

//creating request for unary_Command
Unary_Expr_Node* Expr_Node_Tree_Factory::create_unary_command (Expr_Node *n1)
{
	return new Unary_Expr_Node(n1);
}


