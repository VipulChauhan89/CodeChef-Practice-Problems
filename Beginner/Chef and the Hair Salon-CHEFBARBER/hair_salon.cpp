/*
  Chef recently realized that he needs a haircut, and went to his favorite hair salon. 
  At the salon, he found N customers waiting for their haircuts. 
  From his past experience, Chef knows that the salon takes M minutes per customer. 
  Only one person can get their haircut at a time.

  Program to find how many minutes will Chef have to wait before he can get his haircut?
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,M;
	cin>>T;
	while(T--)
	{
	    cin>>N>>M;
	    cout<<N*M<<endl;
	}
	return 0;
}
