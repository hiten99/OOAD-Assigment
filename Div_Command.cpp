#include <exception>
#include <iostream>
#include  "Div_Command.h"

  // Hitendra, please use the template method pattern to reduce the
  // amount of code duplicated across binary commands.
	
  // Dr.Hill, I have used the template method pattern  to reduce the
  // amount of code duplicated across binary commands.
 
 //
 //constructor
 //

 Div_Command::Div_Command()
 {

 }

 //
 //destructor
 //

 Div_Command::~Div_Command()
 {

 }

 //
 // evaluate(int n1,int n2) const
 //

 int Div_Command::evaluate(int n1,int n2) const
 {
	if(n2==0)
	 {
		 throw std::runtime_error("division not possible");
	 }
	 return n1/n2;
	 
 }

 //
 // getcommand()
 //

 std::string Div_Command::getcommand()
 {
	std::string a="/";
	return a;
 }

 //
 // getpriority()
 //

 int Div_Command:: getpriority()
 {
	return 4;
 }