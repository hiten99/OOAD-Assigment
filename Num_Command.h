#ifndef _CS507_NUM_COMMAND_H_
#define _CS507_NUM_COMMAND_H_

#include "Expr_Command.h"
#include "Stack.h"

/*
 * @class Num_Command
 * Basic implementation of Num_Command class for Number operations.
*/

class Num_Command : public Expr_Command {
public:

	/*
	* constructor
	*/
	Num_Command();
	
	/*
	* destructor
	*/
	~Num_Command();
   
	/**
    * Initializing constructor.
    *
    * @param[in]      n             value to be pushed on stack
    */
	Num_Command (int n);
    
	/* 
    * This function computes the Num operation
    * @param[in]       s          stack of operators
    * @return         bool		 returns true or false
    */
	bool execute (Stack <int> & s);
	
	/* 
    * This function returns the command type
    * @return         string		 returns command type
    */
	
	std::string commandtype();
	
	int priority();
private:
	//variable to push to stack
		int n_;
};
#endif  // !defined _CS507_NUM_COMMAND_H_