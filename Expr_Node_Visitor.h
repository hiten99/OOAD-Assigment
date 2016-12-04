#ifndef _CS507_EXPR_NODE_VISITOR_H_
#define _CS507_EXPR_NODE_VISITOR_H_

#include "Binary_Expr_Node.h"
#include "Add_Expr_Node.h"
#include "Sub_Expr_Node.h"
#include "Num_Node.h"
#include "Mul_Expr_Node.h"
#include "Mod_Expr_Node.h"
#include "Div_Expr_Node.h"
#include "Unary_Expr_Node.h"

class Expr_Node_Visitor {
public:
 ///constructor
 Expr_Node_Visitor (void);
 ///destructor
 virtual ~Expr_Node_Visitor (void);
 // Methods for visiting concrete nodes
 virtual void Visit_Addition_Node (const Add_Expr_Node & node)=0;
 virtual void Visit_Subtraction_Node (const Sub_Expr_Node & node)=0;
 virtual void Visit_Division_Node (const Div_Expr_Node & node)=0;
 virtual void Visit_Number_Node (const Num_Node & node)=0;
 virtual void Visit_Multiplication_Node (const Mul_Expr_Node & node)=0;
 virtual void Visit_Modulus_Node (const Mod_Expr_Node & node)=0;
 virtual void Visit_Unary_Node (const Unary_Expr_Node & node)=0;
}; 
#endif  // !defined _CS507_EXPR_NODE_VISITOR_H_