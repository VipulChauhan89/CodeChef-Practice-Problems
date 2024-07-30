#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	cin>>T;
	while(T--)
	{
	    int i;
	    cin>>N;
	    for(i=2;i<N;i++)
	    {
	        if(N%i==0)
	        {
	            break;
	        }
	    }
	    cout<<((i==N)?"yes":"no")<<endl;
	}
	return 0;
}