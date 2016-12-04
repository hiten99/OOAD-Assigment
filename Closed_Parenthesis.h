#ifndef _CS507_CLOSED_PARENTHESIS_COMMAND_H_
#define _CS507_CLOSED_PARENTHESIS_COMMAND_H_

#include "Stack.h"
#include  "Expr_Command.h"

/*
 * @class Closed_Parenthesis
 * Basic implementation of Closed_Parenthesis class for Closed Parenthesis operations.
*/

class Closed_Parenthesis : public Expr_Command {
	public:
	
	// constructor
	Closed_Parenthesis();

	// destructor
	~Closed_Parenthesis();
	
	/* 
	* This function computes the closed parenthesis operation
	* @param[in]       s        stack of operators
	* @return         bool		 returns true 
	*/
	bool execute (Stack <int> & s);
	std::string commandtype();
	int priority ();
};
#endif  // !defined _CS507_CLOSED_PARENTHESIS_COMMAND_H_