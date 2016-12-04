#ifndef _CS507_EXPR_TREE_BUILDER_H_
#define _CS507_EXPR_TREE_BUILDER_H_

#include <string>
#include "Expr_Builder.h"
#include "Expr_Node_Tree_Factory.h"
#include "Stack.h"
#include "Expr_Node.h"

class Expr_Tree_Builder : public Expr_Builder {
public:

 ///constructor
 Expr_Tree_Builder (void);
 ///destructor
 virtual ~Expr_Tree_Builder (void);
 // build methods
 virtual void build_number (int n);
 virtual void build_add_operand (void);
 virtual void build_subtract_operand (void);
 virtual void build_multiplication_operand (void);
 virtual void build_division_operand (void);
 virtual void build_modulus_operand (void);
 virtual void build_unary_operand(void);
 virtual void build_open_parenthesis_operand(void);
 virtual void build_close_parenthesis_operand(void);
 void check_operand(std::string sti,Expr_Node * n1,Expr_Node * n2);
// get the current expression
Expr_Node * get_expression (void);
  
void operations(std::string operand);

/**
* checks precedence of operators
* @param[in]      op1,op2	operator
* @return		bool      
*/ 

bool precedence(std::string op1, std::string op2);
	
/**
* assigns weights to operators
* @param[in]    op		operator
* @return		bool      
*/ 

int check_weight(std::string op);

/**
* check if token is number
* @param[in]    num		number
* @return		bool      
*/ 

bool isNum(std::string num);

/**
* check if token is operator
* @param[in]    num		number
* @return		bool      
*/ 

bool isOperator(std::string op);


private:
 // current state of expression tree
  Expr_Node * tree_;
  Expr_Node *n1;
  Expr_Node *n2;

 // other variables to coordinate build process
Expr_Node_Tree_Factory a;
Stack <Expr_Node *> s;
Stack <std::string> str;
int k;
int l;
};
#endif  // !defined _CS507_EXPR_TREE_BUILDER_H_