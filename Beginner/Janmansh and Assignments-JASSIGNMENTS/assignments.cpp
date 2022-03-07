/*
  Janmansh has to submit 3 assignments for Chingari before 10 pm and he starts to do the assignments at X pm. 
  Each assignment takes him 1 hour to complete. 
  Program to tell whether he'll be able to complete all assignments on time or not?
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
	    if(X+3<=10)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
