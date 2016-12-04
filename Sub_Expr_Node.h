#ifndef _CS507_SUB_EXPR_NODE_H_
#define _CS507_SUB_EXPR_NODE_H_

#include "Binary_Expr_Node.h"

class Sub_Expr_Node : public Binary_Expr_Node {
public:
 ///constructor
 Sub_Expr_Node (void);
 /// parameterized constructor
 Sub_Expr_Node (Expr_Node *n1,Expr_Node *n2);
 ///destructor
 virtual ~Sub_Expr_Node (void);
 
/**
 * calc method for num node
 * @return		 int	num1,num2 
 */
 virtual int calc (int num1, int num2);

 /**
* accept method in vistor 
*
* @param[in]      v       visitor
* 
*/
 virtual void accept (Expr_Node_Visitor & v); 
};
#endif  // !defined _CS507_SUB_EXPR_NODE_H_