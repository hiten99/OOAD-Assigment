#ifndef _CS507_NUM_NODE_H_
#define _CS507_NUM_NODE_H_

#include "Expr_Node.h"

/*
 * @class Num_Command
 * Basic implementation of Num_Command class for Number operations.
*/

class Num_Node : public Expr_Node {
public:

/// Default constructor.

Num_Node();

/// Parameterized constructor.

Num_Node(int n);
	
///destructor

virtual ~Num_Node();

 /**
* accept method in vistor 
*
* @param[in]      v           visitor
* 
*/

virtual void accept (Expr_Node_Visitor & v);

/**
 *
 * eval method for num node
 * @return		 int	number 
 */
virtual int eval (void) ;
 
/**
 *
 * @return		 int	number	   
 *
 */
int get_num_value()const;

private:
	//variable to push to stack
		int n;
};
#endif  // !defined _CS507_NUM_NODE_H_