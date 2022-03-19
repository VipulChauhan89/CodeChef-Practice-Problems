/*
  Janmansh is at the fruit market to buy fruits for Chingari. There is an infinite supply of three different kinds of fruits with prices A, B and C.
  He needs to buy a total of X fruits having at least 2 different kinds of fruits.
  
  Program to find the least amount of money he can spend to buy fruits?
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,X,A,B,C;
	cin>>T;
	while(T--)
	{
	    cin>>X>>A>>B>>C;
	    cout<<((X-1)*min(A,min(B,C)))+(A+B+C-min(A,min(B,C))-max(A,max(B,C)))<<endl;
	}
	return 0;
}
