#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B;
	    for(int i=1;;i++)
	    {
	        if(i%2!=0)
	        {
	            A-=i;
	            if(A<0)
	            {
	                cout<<"Bob"<<endl;
	                break;
	            }
	        }
	        else
	        {
	            B-=i;
	            if(B<0)
	            {
	                cout<<"Limak"<<endl;
	                break;
	            }
	        }
	    }
	}
	return 0;
}