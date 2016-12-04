#ifndef _CS507_STACK_EXPR_COMMAND_H_
#define _CS507_STACK_EXPR_COMMAND_H_


#include "Expr_Command_Factory.h"
#include "Stack.h"
#include "Num_Command.h"
#include "Div_Command.h"
#include "Add_Command.h"
#include "Subtract_Command.h"
#include "Mul_Command.h"
#include "Mod_Command.h"
#include "Open_Parenthesis.h"
#include "Closed_Parenthesis.h"

class Stack_Expr_Command_Factory : public Expr_Command_Factory
{
 public:
 
 // constructor
 Stack_Expr_Command_Factory();
 // destructor
 virtual ~Stack_Expr_Command_Factory (void); 
 // creating Num_Command request 
 virtual Num_Command * create_num_command (int n);
 // creating Add_Command request 
 virtual Add_Command * create_add_command (void);
 // creating Subtract_Command request 
 virtual Subtract_Command * create_subtract_command (void);
 // creating Mul_Command request
 virtual Mul_Command * create_mul_command (void);
 // creating Div_Command request
 virtual Div_Command * create_div_command (void);
 // creating Mod_Command request
 virtual Mod_Command * create_mod_command (void);
 // creating Open_Parenthesis request
 virtual Open_Parenthesis * create_open_parenthesis_command (void);
 // creating Closed_Parenthesis request
 virtual Closed_Parenthesis * create_closed_parenthesis_command (void);
};
#endif  // !defined _CS507_STACK_EXPR_COMMAND_H_