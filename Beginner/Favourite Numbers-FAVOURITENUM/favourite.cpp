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
	    int A;
	    cin>>A;
	    if(A%2==0 && A%7==0)
	    {
	        cout<<"Alice"<<endl;
	    }
	    else if(A%2!=0 && A%9==0)
	    {
	        cout<<"Bob"<<endl;
	    }
	    else
	    {
	        cout<<"Charlie"<<endl;
	    }
	}
	return 0;
}
