#ifndef _CS507_EXPR_COMMAND_FACTORY_H_
#define _CS507_EXPR_COMMAND_FACTORY_H_

#include "Expr_Command.h"
#include "Add_Command.h"
#include "Mul_Command.h"
#include "Num_Command.h"
#include "Subtract_Command.h"
#include "Mod_Command.h"
#include "Div_Command.h"
#include "Open_Parenthesis.h"
#include "Closed_Parenthesis.h"
/*
 * @class Expr_Command_Factory
 * Basic implementation of Expr_Command_Factory class for Expression command factory
 */
class Expr_Command_Factory
{
public:
	//constructor
	Expr_Command_Factory(void){};
	//destructor.
	virtual ~Expr_Command_Factory (void);
	//creating request for Num_Command
	virtual Num_Command * create_num_command (int num) = 0;
	//creating request for Add_Command
	virtual Add_Command * create_add_command (void) = 0;
	//creating request for Subtract_Command
	virtual Subtract_Command * create_subtract_command (void) = 0;
	//creating request for Mul_Command
	virtual Mul_Command * create_mul_command (void) = 0;
	//creating request for Div_Command
	virtual Div_Command * create_div_command (void) = 0;
	//creating request for Mod_Command
	virtual Mod_Command * create_mod_command (void) = 0;
	//creating request for Open_Parenthesis
	virtual Open_Parenthesis * create_open_parenthesis_command (void) = 0;
	//creating request for Closed_Parenthesis
	virtual Closed_Parenthesis * create_closed_parenthesis_command (void) = 0;
 
private:
 // prevent the following operations
 Expr_Command_Factory (const Expr_Command_Factory &);
 const Expr_Command_Factory & operator = (const Expr_Command_Factory &);
};
inline Expr_Command_Factory::~Expr_Command_Factory(){}
#endif  // !defined _CS507_EXPR_COMMAND_FACTORY_H_
