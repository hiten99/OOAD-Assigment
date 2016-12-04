#ifndef _CS507_EXPR_COMMAND_H_
#define _CS507_EXPR_COMMAND_H_

#include  "Stack.h"
#include <string>
/*
 * @class Expr_Command
 * Basic implementation of Expr_Command class 
*/

class Expr_Command {
public:
	
	// constructor
	Expr_Command();
	
	// destructor
	~Expr_Command();

	/* 
	* This function computes the Expression and its a pure virtual function
	* @param[in]       s        stack of operators
	* @return         bool		 returns true or false
	*
	*/
	virtual bool execute (Stack <int> & stack ) = 0;
	virtual std::string commandtype () = 0;
	 virtual int priority ()=0;
};

#endif  // !defined _CS507_EXPR_COMMAND_H_
