#include<iostream>
#include<cstdlib>
#include<string> 
#include <ctime>
#include <fstream>
#include "random2.h"
int main()
{
	int n=0;
	std::cout<<"enter no of expressions\n";
	std::cin>>n;
	std::string s;
	std::cout<<"enter file name with file path \n";
	std::cin>>s;
	random2 a;
	a.exp1(n,s);
	a.exp2(n,s);
	a.exp3(n,s);
	a.exp4(n,s);
	a.exp5(n,s);
	system("pause");
	return 0;
}
