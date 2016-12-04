#ifndef _CS507_BIN_OP_H
#define _CS507_BIN_OP_H

/*
 * @class Binary_Op_Command
 * Basic implementation of Binary_Op_Command class for binary operations.
*/

#include "Stack.h"
#include  "Expr_Command.h"

class Binary_Op_Command : public Expr_Command {
public:
 Binary_Op_Command();
 ~Binary_Op_Command();
virtual bool execute (Stack <int> & s);
 virtual int evaluate (int n1, int n2) const = 0;
 std::string commandtype () ;
 virtual std::string getcommand ()= 0;
 int priority ();
 virtual int getpriority ()= 0;

};
#endif  // !defined _CS507_BIN_OP_H