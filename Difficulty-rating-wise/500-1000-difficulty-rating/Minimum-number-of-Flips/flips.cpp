#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,num;
	cin>>T;
	while(T--)
	{
	    int sum=0;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>num;
	        sum+=num;
	    }
	    cout<<((N%2==0)?abs(sum)/2:-1)<<endl;
	    
	}
	return 0;
}