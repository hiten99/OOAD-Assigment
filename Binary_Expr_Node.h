#ifndef _CS507_BINARY_EXPR_NODE_H_
#define _CS507_BINARY_EXPR_NODE_H_

#include"Expr_Node.h"

class Binary_Expr_Node : public Expr_Node {
public:
///constructor
Binary_Expr_Node (void);

///destructor
virtual ~Binary_Expr_Node (void);
 
// Binary_Expr_Node (Expr_Node *n1,Expr_Node *n2)
Binary_Expr_Node (Expr_Node *n1,Expr_Node *n2);

 /**
* accept method in visitor 
*
* @param[in]      v         visitor
* 
*/
virtual void accept (Expr_Node_Visitor & v); 
 
/**
* eval method  
*/ 
virtual int eval (void) ;

 /**
* calc method in vistor 
*
* @param[in]      num1,num2          two operands
* 
*/ 
 virtual int calc(int num1, int num2)=0;

 /*
* get_left method returns left node
*/

 virtual Expr_Node* get_left() const;

  /*
* get_right method returns right node
*/
 virtual Expr_Node* get_right() const;

protected:
 Expr_Node * right_;
 Expr_Node * left_;

};
#endif  // !defined _CS507_BINARY_EXPR_NODE_H_