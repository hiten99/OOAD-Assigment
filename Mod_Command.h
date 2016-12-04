#ifndef _CS507_MOD_COMMAND_H_
#define _CS507_MOD_COMMAND_H_

#include "Stack.h"
#include "binary_op.h"

/*
 * @class Mod_Command
 * Basic implementation of Mod_Command class for modulus operations.
*/
class Mod_Command : public Binary_Op_Command {
	public:

   /* 
   * This function computes the modulus operation
   * @param[in]       s        stack of operators
   * @return         bool		 returns true 
   */
 int evaluate(int n1,int n2) const;
 
 std::string getcommand();
 
 int getpriority();
};
#endif  // !defined _CS507_MOD_COMMAND_H_