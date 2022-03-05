/*
  Chef bought N items from a shop. 
  Although it is hard to carry all these items in hand, so Chef has to buy some polybags to store these items.
  1 polybag can contain at most 10 items. 
  Program to find the minimum number of polybags needed by Chef?
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N;
	cin>>T;
	while(T--)
	{
	   cin>>N;
	   if(N%10!=0)
	   {
	       cout<<(N/10)+1<<endl;
	   }
	   else
	   {
	       cout<<N/10<<endl;
	   }
	}
	return 0;
}
