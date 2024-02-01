#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,R1,R2,R3,R4,R5;
	cin>>T;
	while(T--)
	{
	    cin>>R1>>R2>>R3>>R4>>R5;
	    cout<<((R1+R2+R3+R4+R5>=4)?"YES":"NO")<<endl;
	}
	return 0;
}
