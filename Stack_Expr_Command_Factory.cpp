#include "Stack_Expr_Command_Factory.h"

Stack_Expr_Command_Factory::Stack_Expr_Command_Factory ()
 {

 }
Stack_Expr_Command_Factory::~Stack_Expr_Command_Factory (void)
 {

 }
 Num_Command * Stack_Expr_Command_Factory::create_num_command (int n)
 {
	 return new Num_Command(n);
 }
 Add_Command * Stack_Expr_Command_Factory::create_add_command (void) 
 {
	 return new Add_Command();
 }
 Subtract_Command * Stack_Expr_Command_Factory::create_subtract_command (void)
 {
	 return new Subtract_Command();
 }

 Mul_Command * Stack_Expr_Command_Factory::create_mul_command (void)
 {
	 return new Mul_Command();
 }
 Div_Command * Stack_Expr_Command_Factory::create_div_command (void)
 {
	 return new Div_Command();
 }
 Mod_Command * Stack_Expr_Command_Factory::create_mod_command (void)
 {
	 return new Mod_Command();
 }
 Open_Parenthesis * Stack_Expr_Command_Factory::create_open_parenthesis_command (void)
 {
	 return new  Open_Parenthesis ();
 }
 Closed_Parenthesis * Stack_Expr_Command_Factory::create_closed_parenthesis_command(void) 
 {
	 return new Closed_Parenthesis();
 }