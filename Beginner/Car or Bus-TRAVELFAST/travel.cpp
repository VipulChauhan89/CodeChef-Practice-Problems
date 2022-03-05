/*
  Chef wants to reach home as soon as possible. He has two options:
  Travel with his BIKE which takes X minutes.
  Travel with his CAR which takes Y minutes.
  Program to help chef find out which of the two options is faster or do they both take same time?
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
	    if(X<Y)
	    {
	        cout<<"BIKE"<<endl;
	    }
	    else if(X>Y)
	    {
	        cout<<"CAR"<<endl;
	    }
	    else
	    {
	        cout<<"SAME"<<endl;
	    }
	}
	return 0;
}
