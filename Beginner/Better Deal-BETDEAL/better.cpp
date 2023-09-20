#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
	    int A,B;
	    cin>>A>>B;
	    A=100-A;
	    B=200-(B*2);
	    if(A==B)
	    {
	        cout<<"BOTH"<<endl;
	    }
	    else if(A<B)
	    {
	        cout<<"FIRST"<<endl;
	    }
	    else
	    {
	        cout<<"SECOND"<<endl;
	    }
	}
	return 0;
}
