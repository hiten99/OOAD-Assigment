#include<iostream>
#include<cstdlib>
#include<string> 
#include <ctime>
#include <fstream>

#include "random2.h"

random2::random2()
{
}

random2::~random2()
{
}

void random2::exp1(int n, std::string s)
{
	std::ofstream myfile;
	myfile.open (s);
	
    std::srand((unsigned)time(0)); 
	for(int i=0;i<n;i++)
	{   

	int random_integer1 = rand()%100+1;
    myfile <<random_integer1 <<" ";
	int random_operand1 =  rand()%5+1;
    std::string s;
	
    switch(random_operand1)
    {
        case 1:
        s="+";
		myfile <<s<<" ";
		break;
        case 2:
        s="-";
        myfile <<s<<" ";
		break;
        case 3:
        s="*";
		myfile <<s<<" ";
        break;
        case 4:
        s="/";
		myfile <<s<<" ";
        break;
        case 5:
        s="%";
		myfile <<s<<" ";
        break;
    }
	
    int random_integer2 = rand()%100+1;
    myfile <<random_integer2;
	myfile <<"\n";
	}

	myfile <<"QUIT";
	myfile.close();
	
}



void random2::exp2(int n, std::string s)
{
	std::ofstream myfile;
	myfile.open (s);
	
    std::srand((unsigned)time(0)); 
	for(int i=0;i<n;i++)
	{   

	int random_integer1 = rand()%100+1;
    myfile <<random_integer1 <<" ";
	int random_operand1 =  rand()%5+1;
    std::string s;
	
    switch(random_operand1)
    {
        case 1:
        s="+";
		myfile <<s<<" ";
		break;
        case 2:
        s="-";
        myfile <<s<<" ";
		break;
        case 3:
        s="*";
		myfile <<s<<" ";
        break;
        case 4:
        s="/";
		myfile <<s<<" ";
        break;
        case 5:
        s="%";
		myfile <<s<<" ";
        break;
    }
	
    int random_integer2 = rand()%100;
    myfile <<random_integer2<<" ";

	int random_operand2 =  rand()%5+1;
    std::string s2;
	
    switch(random_operand2)
    {
        case 1:
        s2="+";
		myfile <<s<<" ";
		break;
        case 2:
        s2="-";
        myfile <<s<<" ";
		break;
        case 3:
        s2="*";
		myfile <<s<<" ";
        break;
        case 4:
        s2="/";
		myfile <<s<<" ";
        break;
        case 5:
        s2="%";
		myfile <<s<<" ";
        break;
    }
	int random_integer3 = rand()%100;
    myfile <<random_integer3;

	myfile <<"\n";
	}

	myfile <<"QUIT";
	myfile.close();
}

void random2::exp3(int n, std::string s)
{
	

	std::ofstream myfile;
	myfile.open (s);
	
    std::srand((unsigned)time(0)); 
	for(int i=0;i<n;i++)
	{   
	int random_integer1 = rand()%100+1;
    myfile <<random_integer1<<" ";	
    
	int random_operand1 =  rand()%5+11;
    std::string s1;
	
    switch(random_operand1)
    {
        case 11:
        s1="-";
		myfile <<s1<<" ";
		break;
        case 12:
        s1="+";
        myfile <<s1<<" ";
		break;
        case 13:
        s1="/";
		myfile <<s1<<" ";
        break;
        case 14:
        s1="%";
		myfile <<s1<<" ";
        break;
        case 15:
        s1="*";
		myfile <<s1<<" ";
        break;
    }

	myfile <<"( ";
    int random_integer2 = rand()%100+1;
    myfile <<random_integer2 <<" ";
	int random_operand2 =  rand()%5+1;
    std::string s2;
	
    switch(random_operand2)
    {
        case 1:
        s2="+";
		myfile <<s2<<" ";
		break;
        case 2:
        s2="-";
        myfile <<s2<<" ";
		break;
        case 3:
        s2="*";
		myfile <<s2<<" ";
        break;  
        case 4:
        s2="/";
		myfile <<s2<<" ";
        break;
        case 5:
        s2="%";
		myfile <<s2<<" ";
        break;
    }
	
    int random_integer3 = rand()%100+1;
    myfile <<random_integer3<<" ";
	myfile <<")";
	myfile <<"\n";
	}

	myfile <<"QUIT";
	myfile.close();
	
	
}
void random2::exp4(int n, std::string s)
{
	

	std::ofstream myfile;
	myfile.open (s);
	
    std::srand((unsigned)time(0)); 
	for(int i=0;i<n;i++)
	{   
	int random_integer1 = rand()%100;
    myfile <<random_integer1<<" ";	
    
	int random_operand1 =  rand()%5+11;
    std::string s1;
	
    switch(random_operand1)
    {
        case 11:
        s1="-";
		myfile <<s1<<" ";
		break;
        case 12:
        s1="+";
        myfile <<s1<<" ";
		break;
        case 13:
        s1="/";
		myfile <<s1<<" ";
        break;
        case 14:
        s1="%";
		myfile <<s1<<" ";
        break;
        case 15:
        s1="*";
		myfile <<s1<<" ";
        break;
    }

	myfile <<"( ";
    int random_integer2 = rand()%100+1;
    myfile <<random_integer2 <<" ";
	int random_operand2 =  rand()%5+1;
    std::string s2;
	
    switch(random_operand2)
    {
        case 1:
        s2="+";
		myfile <<s2<<" ";
		break;
        case 2:
        s2="-";
        myfile <<s2<<" ";
		break;
        case 3:
        s2="*";
		myfile <<s2<<" ";
        break;  
        case 4:
        s2="/";
		myfile <<s2<<" ";
        break;
        case 5:
        s2="%";
		myfile <<s2<<" ";
        break;
    }
	
    int random_integer3 = rand()%100+1;
    myfile <<random_integer3<<" ";
	myfile <<") ";
	int random_operand3 =  rand()%5+1;
    std::string s3;
	
    switch(random_operand3)
    {
        case 1:
        s3="+";
		myfile <<s3<<" ";
		break;
        case 2:
        s3="-";
        myfile <<s3<<" ";
		break;
        case 3:
        s3="*";
		myfile <<s3<<" ";
        break;  
        case 4:
        s3="/";
		myfile <<s3<<" ";
        break;
        case 5:
        s3="%";
		myfile <<s3<<" ";
        break;
    }
    int random_integer4 = rand()%100;
    myfile <<random_integer4;	

	myfile <<"\n";
	}

	myfile <<"QUIT";
	myfile.close();
	
	
}

void random2::exp5(int n, std::string s)
{

	std::ofstream myfile;
	myfile.open (s);
	
    std::srand((unsigned)time(0)); 
	for(int i=0;i<n;i++)
	{   
	myfile <<"( ";
	int random_integer1 = rand()%100;
    myfile <<random_integer1<<" ";	
    
	int random_operand1 =  rand()%5+11;
    std::string s1;
	
    switch(random_operand1)
    {
        case 11:
        s1="-";
		myfile <<s1<<" ";
		break;
        case 12:
        s1="+";
        myfile <<s1<<" ";
		break;
        case 13:
        s1="/";
		myfile <<s1<<" ";
        break;
        case 14:
        s1="%";
		myfile <<s1<<" ";
        break;
        case 15:
        s1="*";
		myfile <<s1<<" ";
        break;
    }

    int random_integer2 = rand()%100+1;
    myfile <<random_integer2 <<" ";
	int random_operand2 =  rand()%5+1;
    std::string s2;
	myfile <<") ";

    switch(random_operand2)
    {
        case 1:
        s2="+";
		myfile <<s2<<" ";
		break;
        case 2:
        s2="-";
        myfile <<s2<<" ";
		break;
        case 3:
        s2="*";
		myfile <<s2<<" ";
        break;  
        case 4:
        s2="/";
		myfile <<s2<<" ";
        break;
        case 5:
        s2="%";
		myfile <<s2<<" ";
        break;
    }
	myfile <<"( ";
    int random_integer3 = rand()%100+1;
    myfile <<random_integer3<<" ";

	int random_operand3 =  rand()%5+1;
    std::string s3;
	
    switch(random_operand3)
    {
        case 1:
        s3="+";
		myfile <<s3<<" ";
		break;
        case 2:
        s3="-";
        myfile <<s3<<" ";
		break;
        case 3:
        s3="*";
		myfile <<s3<<" ";
        break;  
        case 4:
        s3="/";
		myfile <<s3<<" ";
        break;
        case 5:
        s3="%";
		myfile <<s3<<" ";
        break;
    }
    int random_integer4 = rand()%100;
    myfile <<random_integer4;	
    myfile <<" )";
	myfile <<"\n";
	}

	myfile <<"QUIT";
	myfile.close();
}