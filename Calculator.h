#ifndef _CS507_CALCULATOR_H_
#define _CS507_CALCULATOR_H_

#include <string>
#include <iostream>
#include <sstream>

class Calculator
{
public:
	Calculator();
	virtual ~Calculator();
	virtual bool parse_expr(const std::string & expression)=0;
	virtual int getvalue()=0;
private:

};
#endif  // !defined _CS507_CALCULATOR_H_