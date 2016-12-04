#include "Closed_Parenthesis.h"

//constructor
Closed_Parenthesis::Closed_Parenthesis()
{
}

//destructor
Closed_Parenthesis::~Closed_Parenthesis()
{
}

//
// Closed_Parenthesis(Stack <int> &)
//
// execute function
//

bool Closed_Parenthesis::execute (Stack <int> & s)
{
	return true;
}

std::string Closed_Parenthesis::commandtype()
{
	 std::string a=")";
	 return a;
}
int Closed_Parenthesis:: priority()
{
	return 10;
}