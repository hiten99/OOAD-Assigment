#include  "Subtract_Command.h"

  // Hitendra, please use the template method pattern to reduce the
  // amount of code duplicated across binary commands.
	
  // Dr.Hill, I have used the template method pattern  to reduce the
  // amount of code duplicated across binary commands.

 //
 // constructor
 //

 Subtract_Command::Subtract_Command()
 {

 }

 //
 // destructor
 //

 Subtract_Command::~Subtract_Command()
 {

 }

 //
 // evaluate(int n1,int n2) const
 //

 int Subtract_Command::evaluate(int n1,int n2) const
 {
	return n1-n2;
 }

 //
 // getcommand()
 //

 std::string Subtract_Command::getcommand()
 {
	std::string a="-";
	return a;
 }

 //
 // getpriority()
 //

 int Subtract_Command:: getpriority()
 {
	return 2;
 }