//program to print output in a separate line, "yes" if the number is prime else "no for n test cases
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int T,num,c;
	cin>>T;
	while(T--)
	{
	    cin>>num;
	    c=0;
	    if(num==1)
	    {
	        cout<<"no"<<endl;
	    }
	    else
	    {
	        for(int i=2;i<=sqrt(num);i++)
	        {
	            if(num%i==0)
	            {
	                c=1;
	                break;
	            }
	        }
	        if(c==1)
	        {
	            cout<<"no"<<endl;
	        }
	        else
	        {
	            cout<<"yes"<<endl;
	        }   
	    }
	}
	return 0;
}
