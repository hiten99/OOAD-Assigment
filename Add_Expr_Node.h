#ifndef _CS507_ADD_EXPR_NODE_H_
#define _CS507_ADD_EXPR_NODE_H_

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <cstdlib>
#include <exception>

#include "Binary_Expr_Node.h"
class Add_Expr_Node : public Binary_Expr_Node {
public:
/// Default constructor.
 Add_Expr_Node (void);

 /// Parameterized constructor.
 Add_Expr_Node (Expr_Node *n1,Expr_Node *n2);

  /**
 * accept method in visitor 
 *
 * @param[in]      v        visitor
 * 
 */
 virtual void accept (Expr_Node_Visitor & v);

 ///destructor
 virtual ~Add_Expr_Node (void);

  /**
 * calc method in vistor 
 *
 * @param[in]      num1,num2          two int operands
 * @return         int
 */ 
 virtual int calc (int num1, int num2);
}; 

#endif  // !defined _CS507_ADD_EXPR_NODE_H_