#include "Open_Parenthesis.h"

 //
 // constructor
 //
 Open_Parenthesis::Open_Parenthesis(){}

 //
 // destructor
 //
 Open_Parenthesis::~Open_Parenthesis(){}

 //
 // execute(Stack <int> &)
 //

 bool Open_Parenthesis:: execute (Stack <int> & s)
 {
	return true;
 }

 std::string Open_Parenthesis::commandtype()
 {
	 std::string a="(";
	 return a;
 }

 int Open_Parenthesis::priority ()
 {
	return 10;
 }
