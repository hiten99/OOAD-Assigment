#include "binary_op.h"

Binary_Op_Command::Binary_Op_Command()
{

}

Binary_Op_Command::~Binary_Op_Command()
{

}

bool Binary_Op_Command::execute (Stack <int> & s) 
{
	int n2 = s.top ();
	s.pop();
	int n1 = s.top ();
	s.pop();
 
	int result = this->evaluate (n1, n2);
 	s.push(result);
	return true;
 }

std::string Binary_Op_Command::commandtype ()
{
	std::string result;
	result = this->getcommand();
	return result;	 
}

int Binary_Op_Command:: priority () 
{
	int result;
	result = this->getpriority();
	return result;	 
}