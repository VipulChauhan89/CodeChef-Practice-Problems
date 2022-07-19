/*
  You are given an integer N. Find if it is possible to represent N as the sum of several(possibly zero) 2's and several(possibly zero) 7's.
  Formally, find if there exist two integers X,Y (X,Y≥0) such that 2⋅X+7⋅Y=N.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	cin>>T;
	while(T--)
	{
	   cin>>N;
	   (N==1||N==3||N==5)?cout<<"NO"<<endl:cout<<"YES"<<endl;
	}
	return 0;
}
