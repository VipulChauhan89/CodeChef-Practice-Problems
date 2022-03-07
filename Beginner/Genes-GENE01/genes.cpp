/*
  Program to print a single character denoting the most likely eye color of the child. From the eye colors of the parents.
  (Print R, B or G denoting brown, blue or green respectively).
*/
#include <iostream>
using namespace std;

int main() 
{
	char m,f;
	cin>>m>>f;
	if(m=='R' || f=='R')
	{
	    cout<<'R'<<endl;
	}
	else if(m=='B' || f=='B')
	{
	    cout<<'B'<<endl;
	}
	else
	{
	    cout<<'G'<<endl;
	}
	return 0;
}
