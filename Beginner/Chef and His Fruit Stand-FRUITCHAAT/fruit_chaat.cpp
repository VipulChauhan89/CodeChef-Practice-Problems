/*
  Chef has closed his restaurant and decided to run a fruit stand instead. 
  His signature dish is a fruit chaat consisting of 2 bananas and 1 apple. 
  He currently has X bananas and Y apples. 
  Program to determine how many chaats can he make with the fruits he currently has?
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y;
	    cout<<min(X/2,Y)<<endl;
	}
	return 0;
}
