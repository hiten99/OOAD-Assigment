#ifndef _CS507_UNARY_EXPR_NODE_H_
#define _CS507_UNARY_EXPR_NODE_H_

#include "Expr_Node.h"

class Unary_Expr_Node : public Expr_Node {
public:

///constructor
Unary_Expr_Node (void);

/// parameterized constructor
Unary_Expr_Node(Expr_Node * n1);

	///destructor
virtual ~Unary_Expr_Node (void);

 /**
* accept method in vistor 
*
* @param[in]      v          visitor
* 
*/

void  accept (Expr_Node_Visitor & v) ;


/**
* eval method in vistor 
*/ 

virtual int eval (void);



/**
* get child method in vistor 
*/ 
Expr_Node * get_child() const;


protected:
	//child variable
	Expr_Node * child_;

};
#endif  // !defined _CS507_UNARY_EXPR_NODE_H_