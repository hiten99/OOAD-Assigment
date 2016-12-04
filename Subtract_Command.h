#ifndef _CS507_SUBTRACT_COMMAND_H_
#define _CS507_SUBTRACT_COMMAND_H_

#include "Stack.h"
#include "binary_op.h"

class Subtract_Command : public Binary_Op_Command {
	public:
	Subtract_Command();
	~Subtract_Command();
	/* 
   * This function computes the Num operation
   * @param[in]       s          stack of operators
   * @return         bool		 returns true 
   */

	int evaluate(int n1,int n2) const;
	std::string getcommand();
	int getpriority ();
};
#endif  // !defined _CS507_SUBTRACT_COMMAND_H_