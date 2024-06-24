#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int N,A,odd=0,even=0;
	cin>>N;
	while(N--)
	{
	    cin>>A;
	    if(A%2==0)
	    {
	        even++;
	    }
	    else
	    {
	        odd++;
	    }
	}
	cout<<((even>odd)?"READY FOR BATTLE":"NOT READY")<<endl;
	return 0;
}