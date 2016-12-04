#ifndef _CS507_EXPR_NODE_H_
#define _CS507_EXPR_NODE_H_

class Expr_Node_Visitor ;
class Expr_Node {
public:
 
 ///constructor
 
 Expr_Node (void);
 
 ///destructor
 
 virtual ~Expr_Node (void);
 
 /**
 * accept method in visitor 
 *
 * @param[in]      v         Visitor
 * 
 */

 virtual void accept (Expr_Node_Visitor & v) = 0;
 
 /**
 * eval method in visitor 
 */ 

 virtual int eval (void) = 0;
};
#endif  // !defined _CS507_EXPR_NODE_H_