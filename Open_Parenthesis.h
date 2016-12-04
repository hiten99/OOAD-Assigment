#ifndef _CS507_OPEN_PARENTHESIS_COMMAND_H_
#define _CS507_OPEN_PARENTHESIS_COMMAND_H_

#include "Stack.h"
#include  "Expr_Command.h"
/*
 * @class Open_Parenthesis
 * Basic implementation of Open_Parenthesis class for Open_Parenthesis operations.
*/
class Open_Parenthesis : public Expr_Command {
public:
	//constructor
	Open_Parenthesis();
	//destructor
	~Open_Parenthesis();
	
   /* 
   * This function computes the openparenthesis operation
   * @param[in]       s        stack of operators
   * @return         bool		 returns true 
   */
	bool execute (Stack <int> & s);
	std::string commandtype();
	int priority ();

};
#endif  // !defined _CS507_OPEN_PARENTHESIS_COMMAND_H_