#ifndef _CS507_EXPR_NODE_FACTORY_H_
#define _CS507_EXPR_NODE_FACTORY_H_

#include "Add_Expr_Node.h"
#include "Sub_Expr_Node.h"
#include "Num_Node.h"
#include "Mul_Expr_Node.h"
#include "Mod_Expr_Node.h"
#include "Div_Expr_Node.h"
#include "Unary_Expr_Node.h"
#include "Open_Parenthesis_Expr_Node.h"
#include "Closed_Parenthesis_Expr_Node.h"
class Expr_Node_Factory
{
public:
	//constructor
	Expr_Node_Factory();
	//destructor
	virtual ~Expr_Node_Factory();
	//creating request for Num_Command
	virtual Num_Node * create_num_command (int num) = 0;
	//creating request for Add_Command
	virtual Add_Expr_Node * create_add_command (Expr_Node *n1 ,Expr_Node *n2) = 0;
	//creating request for Subtract_Command
	virtual Sub_Expr_Node * create_subtract_command (Expr_Node *n1,Expr_Node *n2) = 0;
	//creating request for Multiply_Command
	virtual Mul_Expr_Node * create_multiply_command (Expr_Node *n1,Expr_Node *n2) =0;
	//creating request for Divide_Command
	virtual Div_Expr_Node * create_divide_command (Expr_Node *n1,Expr_Node *n2) =0;
	//creating request for Modulus_Command
	virtual Mod_Expr_Node * create_modulus_command (Expr_Node *n1,Expr_Node *n2) =0;
	//creating request for Modulus_Command
	virtual Unary_Expr_Node * create_unary_command (Expr_Node *n1) =0;
};
#endif  // !defined #ifndef _CS507_EXPR_NODE_FACTORY_H_