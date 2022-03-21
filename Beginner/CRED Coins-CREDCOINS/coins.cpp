/*
  For each bill you pay using CRED, you earn X CRED coins.
  At CodeChef store, each bag is worth 100 CRED coins.
  Chef pays Y number of bills using CRED. 
  
  Program to find the maximum number of bags he can get from the CodeChef store.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,X,Y;
	cin>>T;
	while(T--)
	{
	   cin>>X>>Y;
	   cout<<(X*Y)/100<<endl;
	}
	return 0;
}
