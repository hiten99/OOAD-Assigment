#include <exception>
#include  "Mod_Command.h"

  // Hitendra, please use the template method pattern to reduce the
  // amount of code duplicated across binary commands.
	
  // Dr.Hill, I have used the template method pattern  to reduce the
  // amount of code duplicated across binary commands.

//
// evaluate(int n1,int n2) const
//

int Mod_Command::evaluate(int n1,int n2) const
{
	if(n2==0)
	 {
		 throw std::runtime_error("modulus not possible");
	 }
	 return n1%n2; 
}

//
// getcommand()
//

std::string Mod_Command::getcommand()
{
	std::string a="%";
	return a;
}

//
// getpriority ()
//

int Mod_Command:: getpriority ()
{
	return 4;
}