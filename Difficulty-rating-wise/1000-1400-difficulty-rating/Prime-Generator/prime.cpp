#include <iostream>
#include <cmath>
using namespace std;

bool primeCheck(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B;
	cin>>T;
	while(T--)
	{
        cin>>A>>B;
        for(int i=A;i<=B;i++)
        {
            if(i==1)
            {
                continue;
            }
            if(primeCheck(i))
            {
                cout<<i<<endl;
            }
        }
        cout<<endl;
	}
	return 0;
}