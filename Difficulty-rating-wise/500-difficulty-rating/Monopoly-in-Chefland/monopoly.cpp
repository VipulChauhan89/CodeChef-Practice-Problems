#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,R1,R2,R3;
	cin>>T;
	while(T--)
	{
	    cin>>R1>>R2>>R3;
	    int sum=R1+R2+R3;
	    cout<<((sum-R1<R1 || sum-R2<R2 || sum-R3<R3)?"Yes":"No")<<endl;
	}
	return 0;
}