/*
  Chef is currently facing the north direction. 
  Each second he rotates exactly 90 degrees in clockwise direction. 
  Program to find the direction in which Chef is facing after exactly X seconds.

  Note: There are only 4 directions: North, East, South, West (in clockwise order).
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,X;
	cin>>T;
	while(T--)
	{
	   cin>>X;
	   if(X%4==0)
	   {
	       cout<<"North"<<endl;
	   }
	   else if(X%4==1)
	   {
	       cout<<"East"<<endl;
	   }
	   else if(X%4==2)
	   {
	       cout<<"South"<<endl;
	   }
	   else
	   {
	       cout<<"West"<<endl;
	   }
	}
	return 0;
}
