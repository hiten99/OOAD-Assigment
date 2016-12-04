#ifndef _CS507_MUL_COMMAND_H_
#define _CS507_MUL_COMMAND_H_

#include "Stack.h"
#include  "binary_op.h"
/*
 * @class Mul_Command
 * Basic implementation of Mul_Command class for multiplication operations.
*/
class Mul_Command : public Binary_Op_Command {
	public:
		Mul_Command();
		~Mul_Command();
   /* 
   * This function computes the multiplication operation
   * @param[in]       s          stack of operators
   * @return         bool		 returns true 
   */

	int evaluate(int n1,int n2) const;
	std::string getcommand();
	int getpriority ();
};
#endif  // !defined _CS507_MUL_COMMAND_H_