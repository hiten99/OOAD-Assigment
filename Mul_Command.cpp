#include  "Mul_Command.h"

  // Hitendra, please use the template method pattern to reduce the
  // amount of code duplicated across binary commands.
	
  // Dr.Hill, I have used the template method pattern  to reduce the
  // amount of code duplicated across binary commands.

 //
 // constructor
 //
 Mul_Command::Mul_Command()
 {

 }

 //
 // destructor
 //
 Mul_Command::~Mul_Command()
 {

 }

 //
 // evaluate(int n1,int n2) const
 //

 int Mul_Command::evaluate(int n1,int n2) const
 {
	return n1 * n2;
 }

 //
 // getcommand()
 //

 std::string Mul_Command::getcommand()
 {
    std::string a="*";
	return a;
 }

 //
 // getpriority()
 //

 int Mul_Command::getpriority()
 {
 	return 4;
 }