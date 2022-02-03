#include <iostream>
using namespace std;

int main() 
{
	int T,N,r,i;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    r=0;
	    i=1;
	    while(i>0)
	    {
	        N-=i;
	        if(N==0) 
	        {
	            r++;
	        }
	        if(N<=0) 
	        {
	            break;
	        }
	        r++;
	        i++;
	    }
	    cout<<r<<endl;
	}
	return 0;
}
