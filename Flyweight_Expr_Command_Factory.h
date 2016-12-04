#ifndef _CS507_FLYWEIGHT_EXPR_COMMAND_FACTORY_H_
#define _CS507_FLYWEIGHT_EXPR_COMMAND_FACTORY_H_

#include"Expr_Command_Factory.h"
/*
 * @class Flyweight_Expr_Command_Factory
 * Basic implementation of Flyweight_Expr_Command_Factory class for Flyweight Expression command factory
 */

class Flyweight_Expr_Command_Factory : public Expr_Command_Factory
{
public:
	//constructor
	Flyweight_Expr_Command_Factory();
	//destructor
	virtual ~Flyweight_Expr_Command_Factory();
	//creating request for Num_Command
	virtual Num_Command * create_num_command(int num);
	//creating request for Add_Command
	virtual Add_Command * create_add_command();
	//creating request for Subtract_Command
	virtual Subtract_Command * create_subtract_command();
	//creating request for Div_Command
	virtual Div_Command * create_div_command();
	//creating request for Mul_Command
	virtual Mul_Command * create_mul_command();
	//creating request for Mod_Command
	virtual Mod_Command * create_mod_command();
	//creating request for Open_Parenthesis
	virtual Open_Parenthesis * create_open_parenthesis_command();
	//creating request for Closed_Parenthesis
	virtual Closed_Parenthesis * create_closed_parenthesis_command();

private :
	Num_Command * num;
	Add_Command * add;
	Subtract_Command * sub;
	Div_Command * div;
	Mul_Command * mul;
	Mod_Command * mod;
	Open_Parenthesis * open;
	Closed_Parenthesis * close;
};
#endif  // !defined _CS507_FLYWEIGHT_EXPR_COMMAND_FACTORY_H_
