/*
Write a program to take two numbers as input and print their difference if the first number is greater than the second number otherwise print their sum.
*/
#include <iostream>
using namespace std;

int main() 
{
	int N1,N2;
	cin>>N1>>N2;
	if(N1>N2)
	{
	    cout<<(N1-N2)<<endl;
	}
	else
	{
	    cout<<(N1+N2)<<endl;
	}
	return 0;
}
