//  In Chefland, each chicken has X legs and each duck has Y legs. Chef's farm can have exactly one type of bird.
#include <iostream>
using namespace std;

int main() 
{
	int T,X,Y,Z;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y>>Z;
	    if(Z%X==0 && Z%Y==0)
	    {
	        cout<<"ANY"<<endl;
	    }
	    else if(Z%X==0 && Z%Y!=0)
	    {
	        cout<<"CHICKEN"<<endl;
	    }
	    else if(Z%X!=0 && Z%Y==0)
	    {
	        cout<<"DUCK"<<endl;
	    }
	    else
	    {
	        cout<<"NONE"<<endl;
	    }
	}
	return 0;
}
