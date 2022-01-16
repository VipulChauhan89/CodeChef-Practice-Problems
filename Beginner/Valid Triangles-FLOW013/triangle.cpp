//program to check if the triangle is valid or not a triangle is valid if the sum of its all angle is equal to 180 degree.
#include <iostream>
using namespace std;

int main() 
{
	int T,a,b,c;
	cin>>T;
	while(T--)
	{
	    cin>>a>>b>>c;
	    if((a+b+c)==180)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
