#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,num,a,b;
	cin>>T;
	while(T--)
	{
	    cin>>N;
        for(int i=0;i<N;i++)
        {
            cin>>num;
            if(num==1)
            {
                a=i;
            }
            else if(num==N)
            {
                b=i;
            }
        }
        cout<<a+(N-b-1)-(b<a)<<endl;
	}
	return 0;
}