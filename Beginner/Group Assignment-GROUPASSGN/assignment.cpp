/*
  Chef's professor is planning to give his class a group assignment. There are 2N students in the class, with distinct roll numbers ranging from 1 to 2N. 
  Chef's roll number is X. The professor decided to create N groups of 2 students each. 
  The groups were created as follows: the first group consists of roll numbers 1 and 2N, 
  the second group of roll numbers 2 and 2N−1, and so on, with the final group consisting of roll numbers Nand N+1.
  Chef wonders who his partner will be. 
  
  Program to help Chef by telling him the roll number of his partner?
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,X;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X;
	    cout<<(2*N)-X+1<<endl;
	}
	return 0;
}
