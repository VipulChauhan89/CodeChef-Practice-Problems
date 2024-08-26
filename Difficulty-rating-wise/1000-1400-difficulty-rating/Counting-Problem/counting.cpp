#include <iostream>
using namespace std;
const int mod=10e9+7;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,num;
	cin>>T;
	while(T--)
	{
	    int count=0;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>num;
	        count+=((num%2!=0)?1:0);
	    }
	    cout<<((count%2==0 && count!=0)?"YES":"NO")<<endl;
	}
	return 0;
}