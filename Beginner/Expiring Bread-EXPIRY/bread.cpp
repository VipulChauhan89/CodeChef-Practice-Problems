/*
  Eikooc loves bread. She has N loaves of bread, all of which expire after exactly M days. She can eat upto K loaves of bread in a day. 
  
  Program to find out can she eat all the loaves of bread before they expire?
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,M,K;
	cin>>T;
	while(T--)
	{
	    cin>>N>>M>>K;
	    (M*K>=N)?cout<<"Yes"<<endl:cout<<"No"<<endl;
	}
	return 0;
}
