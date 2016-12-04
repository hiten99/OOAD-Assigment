#include "Num_Command.h"

//
// constructor
//

Num_Command::Num_Command()
{

}

//
// destructor
//

Num_Command::~Num_Command ()
{

}

//
//parameterized constructor
//

Num_Command::Num_Command (int n)
 : n_ (n) 
 {

 }

//
// execute(Stack <int> &)
//

bool Num_Command :: execute (Stack <int> & s)
 {
	
	 s.push (this->n_);
	 return true;
 }

//
// commandtype()
//

std::string Num_Command::commandtype()
 {
	 std::string a="n";
	 return a;
 }

int Num_Command::priority()
 {
	 return 6;
 }