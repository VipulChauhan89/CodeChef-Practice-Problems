#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,K,num;
	cin>>T;
	while(T--)
	{
	    int sum=0,no=0;
	    cin>>N>>K;
	    for(int i=1;i<=N;i++)
	    {
	        cin>>num;
	        sum+=(num-K);
	        if(sum<0 && no==0)
	        {
	            no=i;
	        }
	    }
	    cout<<((no!=0)?("NO "+to_string(no)):"YES")<<endl;
	}
	return 0;
}