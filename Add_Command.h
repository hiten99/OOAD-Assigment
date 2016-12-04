

//==============================================================================
/**
 * @file Add_Command.h
 *
 * $Id: Add_Command.h 
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CS507_ADD_COMMAND_H_
#define _CS507_ADD_COMMAND_H_

#include "Stack.h"
#include  "binary_op.h"
/*
 * @class Add_Command
 * Basic implementation of Add_Command class for addition operations.
*/

class Add_Command : public Binary_Op_Command {
 public:
 
	 Add_Command(void);
	 ~Add_Command(void);
 /* 
 * This function computes the addition operation
 * @param[in]       s        stack of operators
 * @return         bool		 returns true
 */
 
 int evaluate(int n1,int n2) const;
 std::string getcommand();
 int getpriority ();
};
#endif  // !defined _CS507_ADD_COMMAND_H_