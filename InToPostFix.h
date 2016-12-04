#ifndef _CS507_INTOPOSTFIX_H_
#define _CS507_INTOPOSTFIX_H_
#include <iostream>
#include <sstream>
#include <string>
#include "Expr_Command_Factory.h"
#include "Stack_Expr_Command_Factory.h"
#include "Stack.h"
#include "Expr_Command.h"
#include "Add_Command.h"
#include "Mul_Command.h"
#include "Num_Command.h"
#include "Subtract_Command.h"
#include "Mod_Command.h"
#include "Div_Command.h"
#include "Open_Parenthesis.h"
#include "Closed_Parenthesis.h"
#include "Calculator.h"

 /*
 * @class InToPostFix 
 * 
 */

class InToPostFix : public Calculator{
public:
	// constructor
	InToPostFix();
	// destructor
	virtual ~InToPostFix();
	// function for converting regular expressions from infix to postfix 
	virtual void infixtopostfix(const std::string & infix,Expr_Command_Factory & factory,Array <Expr_Command *> & postfix);
	// checking if its an operator 
	virtual bool isOperator(std::string op);
	// checking precedence of operators
	virtual bool isNumber(std::string op);
	// parse_expr function
	virtual bool parse_expr(const std::string & expression);
	virtual int getvalue();

private:
	int a;
};
#endif  // !defined _CS507_INTOPOSTFIX_H_