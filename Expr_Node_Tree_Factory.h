#ifndef _CS507_EXPR_NODE_TREE_FACTORY_H_
#define _CS507_EXPR_NODE_TREE_FACTORY_H_

#include "Add_Expr_Node.h"
#include "Sub_Expr_Node.h"
#include "Num_Node.h"
#include "Mul_Expr_Node.h"
#include "Mod_Expr_Node.h"
#include "Div_Expr_Node.h"
#include "Expr_Node_Factory.h"
#include "Unary_Expr_Node.h"
#include "Closed_Parenthesis_Expr_Node.h"
#include "Open_Parenthesis_Expr_Node.h"

class Expr_Node_Tree_Factory : public Expr_Node_Factory
{
public:
	///constructor
	Expr_Node_Tree_Factory();
	///destructor
	virtual ~Expr_Node_Tree_Factory();
	//creating request for Num_Command
	virtual Num_Node * create_num_command (int num) ;
	//creating request for Add_Command
	virtual Add_Expr_Node * create_add_command (Expr_Node *n1,Expr_Node *n2) ;
	//creating request for Subtract_Command
	virtual Sub_Expr_Node * create_subtract_command (Expr_Node *n1,Expr_Node *n2) ;
	//creating request for Multiplication_Command
	virtual Mul_Expr_Node * create_multiply_command (Expr_Node *n1,Expr_Node *n2) ;
	//creating request for division_Command
	virtual Div_Expr_Node * create_divide_command (Expr_Node *n1,Expr_Node *n2) ;
	//creating request for modulus_Command
	virtual Mod_Expr_Node * create_modulus_command (Expr_Node *n1,Expr_Node *n2) ;
	//creating request for unary_Command
	virtual Unary_Expr_Node * create_unary_command (Expr_Node *n1) ;
	
};
#endif  // !defined _CS507_EXPR_NODE_TREE_FACTORY_H_