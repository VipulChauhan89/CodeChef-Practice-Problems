/*
  Chef has a bucket having a capacity of K liters. It is already filled with X liters of water.

  Program to find the maximum amount of extra water in liters that Chef can fill in the bucket without overflowing.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,K,X;
	cin>>T;
	while(T--)
	{
	    cin>>K>>X;
	    cout<<K-X<<endl;
	}
	return 0;
}
