#include  "Add_Command.h"

//
// evaluate(int n1,int n2) const
//

  // Hitendra, please use the template method pattern to reduce the
  // amount of code duplicated across binary commands.
	
  // Dr.Hill, I have used the template method pattern  to reduce the
  // amount of code duplicated across binary commands.

//
// constructor
//

Add_Command::Add_Command(){}

//
// destructor
//
Add_Command::~Add_Command(){}

//
// evaluate(int n1,int n2) const
//

int Add_Command::evaluate(int n1,int n2) const
{
	 return n1+n2; 
}

//
// getcommand()
//

std::string Add_Command::getcommand()
{
	std::string a="+";
	return a;
}

//
// getpriority()
//
int Add_Command:: getpriority()
{
	return 2;
}