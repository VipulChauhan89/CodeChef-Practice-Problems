#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
	    int R1,R2,R3;
	    cin>>R1>>R2>>R3;
	    (R1>R2+R3 || R2>R1+R3 || R3>R1+R2)?cout<<"Yes"<<endl:cout<<"No"<<endl;
	}
	return 0;
}
