#ifndef _CS507_CLOSED_PARENTHESIS_EXPR_NODE_H_
#define _CS507_CLOSED_PARENTHESIS_EXPR_NODE_H_

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <cstdlib>
#include <exception>

#include "Expr_Node.h"
class Closed_Parenthesis_Expr_Node : public Expr_Node{
public:
/// Default constructor.
 Closed_Parenthesis_Expr_Node (void);

 /// Parameterized constructor.
 Closed_Parenthesis_Expr_Node (Expr_Node *n1);

 /// Destructor
 ~Closed_Parenthesis_Expr_Node (void);
  
 /**
 * accept method in visitor 
 *
 * @param[in]      v         Visitor
 * 
 */

 virtual void accept (Expr_Node_Visitor & v) ;
 
 /**
 * eval method in visitor 
 */ 

 virtual int eval (void) ;
}; 

#endif  // !defined _CS507_CLOSED_PARENTHESIS_EXPR_NODE_H_