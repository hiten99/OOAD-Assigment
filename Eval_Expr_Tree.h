#ifndef _CS507_EVAL_EXPR_TREE_H_
#define _CS507_EVAL_EXPR_TREE_H_

#include "Expr_Tree_Builder.h"
#include "Expr_Node_Visitor.h"
#include "Add_Expr_Node.h"
#include "Binary_Expr_Node.h"
#include "Add_Expr_Node.h"
#include "Sub_Expr_Node.h"
#include "Num_Node.h"
#include "Mul_Expr_Node.h"
#include "Mod_Expr_Node.h"
#include "Div_Expr_Node.h"
#include "Unary_Expr_Node.h"
class Eval_Expr_Tree : public Expr_Node_Visitor {
public:
 ///constructor
 Eval_Expr_Tree (void);
 ///destructor
 virtual ~Eval_Expr_Tree (void);
 // Methods for visiting concrete nodes
 virtual void Visit_Addition_Node (const Add_Expr_Node & node);
 virtual void Visit_Subtraction_Node (const Sub_Expr_Node & node);
 virtual void Visit_Division_Node (const Div_Expr_Node & node);
 virtual void Visit_Number_Node (const Num_Node & node);
 virtual void Visit_Multiplication_Node (const Mul_Expr_Node & node);
 virtual void Visit_Modulus_Node (const Mod_Expr_Node & node);
 virtual void Visit_Unary_Node (const Unary_Expr_Node & node);
 /*
 * result method
 * @return[in]		int		
 */
 int result (void) const ;
 private:
 int result_;
 // other state for calculating result
};
#endif  // !defined _CS507_EVAL_EXPR_TREE_H_