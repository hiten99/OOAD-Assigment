#ifndef _CS507_EXPR_BUILDER_H_
#define _CS507_EXPR_BUILDER_H_

#include "Expr_Node.h"
class Expr_Builder {
public:
 ///constructor
 Expr_Builder();
 ///destructor
 virtual ~Expr_Builder();
 // build methods
 virtual void build_number (int n) = 0;
 virtual void build_add_operand (void) = 0;
 virtual void build_subtract_operand (void) = 0;
 virtual void build_multiplication_operand (void) = 0;
 virtual void build_division_operand (void) = 0;
 virtual void build_modulus_operand (void) = 0;
 virtual void build_unary_operand (void) = 0;
 virtual void build_open_parenthesis_operand(void)=0;
 virtual void build_close_parenthesis_operand(void)=0;

 // get the current expression
 virtual Expr_Node * get_expression (void) = 0;
};
#endif  // !defined _CS507_EXPR_BUILDER_H_