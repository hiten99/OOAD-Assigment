#include <iostream>
#include <exception>
#include <fstream>
#include <string>
#include <ctime>
#include "Calculator.h"
#include "InToPostFix.h"
#include "Expr_Node.h"
#include "Num_Node.h"
#include "Add_Expr_Node.h"
#include "Sub_Expr_Node.h"
#include "Mul_Expr_Node.h"
#include "Div_Expr_Node.h"
#include "Mod_Expr_Node.h"
#include "Binary_Expr_Node.h"
#include "TreeCalculator.h"
#include "Eval_Expr_Tree.h"
#include "Expr_Tree_Builder.h"
#include "TreeCalculatorPerformance.h"
#include "InToPostfix_Flyweight.h"
int main(){
		std::string expression;
		int s=0;
		std::cout<<"enter 1 for Tree Calculator  2 for Tree Claculator Performance 3 for Postfix Flyweight\n";
		std::cin>>s;
		std::cout<<"enter filename alongwith its path";
		std::string filename;
		std::cin>>filename;
		std::cout<<filename<<"\n";
		std::ifstream myfile (filename);
		
		if(myfile.is_open()){
		
		std:: clock_t c_start = std::clock();
		while(std::getline (myfile,expression))
		{
			std::cout<<expression<<"\n";
			if(expression=="QUIT")
			{
				break;
			}
	
			Calculator *a;
			try
			{

			if (s==1)
			{
				a=new TreeCalculator();
			}
			else if (s==2)
			{
				a=new TreeCalculatorPerformance();
			}
			else if (s==3)
			{
				a=new InToPostfix_Flyweight();
			}
			else
			{
				std::runtime_error("invalid entry");
				break;
			}
			if(a->parse_expr(expression))
			{
				int result =a->getvalue();
				std::cout<<"result"<<result<<"\n";
				delete a;
			}
			}
			catch(...)
			{
				delete a;
				std::cout<<"invalid\n";
			}

			//end of while
		}	
		std::clock_t c_end = std::clock();
		myfile.close(); 
		std::cout<<"\ntime : "<<1000.0 * (c_end-c_start) / CLOCKS_PER_SEC;
		}//end of open file if
		else
		{
			  std::cout << "Unable to open file";
		}

	system("pause");
	return 0;
}
