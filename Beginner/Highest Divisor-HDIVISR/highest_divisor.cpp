/*
  Program to find the largest integer between 1 and 10 (inclusive) which divides N.
*/
#include <iostream>
using namespace std;

int main() 
{
	int N,i=10;
	cin>>N;
	while(N%i!=0)
	{
	    i--;
	}
	cout<<i<<endl;
	return 0;
}
