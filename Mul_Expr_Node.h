#ifndef _CS507_MUL_EXPR_NODE_H_
#define _CS507_MUL_EXPR_NODE_H_

#include "Binary_Expr_Node.h"

class Mul_Expr_Node : public Binary_Expr_Node {
public:
/// Default constructor.
Mul_Expr_Node (void);

/// Parameterized constructor.
Mul_Expr_Node (Expr_Node *n1,Expr_Node *n2);

 ///destructor

virtual ~Mul_Expr_Node (void);

 /**
* accept method in vistor 
*
* @param[in]      v           Right-hand side of operator
* 
*/

virtual void accept (Expr_Node_Visitor & v); 

 /**
* calc method in vistor 
*
* @param[in]      num1,num2          two operands
* 
*/ 

virtual int calc (int num1, int num2);

};
#endif  // !defined _CS507_MUL_EXPR_NODE_H_