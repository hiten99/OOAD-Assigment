#ifndef _CS507_TREE_CALCULATOR_H_
#define _CS507_TREE_CALCULATOR_H_

#include <iostream>
#include <string>
#include <sstream>
#include "Expr_Tree_Builder.h"
#include "Calculator.h"

class TreeCalculator : public Calculator{
public:

	///constructor
	TreeCalculator();
	
	///destructor
	virtual ~TreeCalculator();
	
	/**
	* parse_expr method for parsing 
	*
	* @param[in]      infix			expression
	* 
	*/ 
	
	virtual bool parse_expr (const std::string & infix);
	
	/**
	* checks if operator is an operator
	* @param[in]      op	operator
	*
	*/ 
	
	virtual bool isOperator(std::string op);
	
	/**
	* checks precedence of operators
	* @param[in]      op1,op2	operator
	* @return		bool      
	*/ 

	virtual bool precedence(std::string op1, std::string op2);
	
	/**
	* assigns weights to operators
	* @param[in]    op		operator
	* @return		bool      
	*/ 

	virtual int check_weight(std::string op);
	
	/*
	* assigns weights to operators
	* @param[in]    postfix		expression
	*
	*/
	
	virtual void build(Expr_Tree_Builder &b);
	
	/*
	* assigns weights to operators
	* @param[in]    postfix		expression
	* @return       bool
	*/
	
	virtual bool isNum(std::string);
	
	/*
	* assigns weights to operators
	* @return       int
	*/
	
	virtual int get_exp();

	virtual int getvalue();

private:
	int a;
};
#endif  // !defined _CS507_TREE_CALCULATOR_H_