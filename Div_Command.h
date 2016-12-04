#ifndef _CS507_DIV_COMMAND_H_
#define _CS507_DIV_COMMAND_H_

#include "Stack.h"
#include "binary_op.h"

/*
 * @class Div_Command
 * Basic implementation of Div_Command class for division operations.
*/

class Div_Command : public Binary_Op_Command {
	public:

	/*
	* constructor
	*/
	Div_Command(void);
	
	/*
	* destructor
	*/
	~Div_Command(void);
    
	/* 
    * This function computes the division operation
    * @param[in]      n1,n2        operands
    * @return         int		   returns value 
    */

	int evaluate(int n1,int n2) const;
	
	std::string getcommand();
	
 int getpriority ();

};
#endif  // !defined _CS507_DIV_COMMAND_H_