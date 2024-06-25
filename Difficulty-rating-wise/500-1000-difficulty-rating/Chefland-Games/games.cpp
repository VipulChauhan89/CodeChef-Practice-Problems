#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,R1,R2,R3,R4;
	cin>>T;
	while(T--)
	{
	    cin>>R1>>R2>>R3>>R4;
	    cout<<((R1==0 && R2==0 && R3==0 && R4==0)?"IN":"OUT")<<endl;
	}
	return 0;
}