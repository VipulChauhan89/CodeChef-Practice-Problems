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
	    int a,m=0;
        cin>>N;
        a=N;
        while(a>0) 
        {
            if(a%10==9)
            {
                m++;
            }
            else
            {
                break;
            }
            a/=10;
        }
        cout<<(m%2==0?N+1:N+2)<<endl;
	}
	return 0;
}