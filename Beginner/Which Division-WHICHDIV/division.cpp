/*
  Given the rating R of a person, tell which division he belongs to. The rating range for each division are given below:
  Division 1: 2000≤ Rating.
  Division 2: 1600≤ Rating <2000.
  Division 3: Rating <1600.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,R;
	cin>>T;
	while(T--)
	{
	   cin>>R;
	   if(R<1600)
	   {
	       cout<<3<<endl;
	   }
	   else if(R>=1600 && R<2000)
	   {
	       cout<<2<<endl;
	   }
	   else 
	   {
	       cout<<1<<endl;
	   }
	}
	return 0;
}
