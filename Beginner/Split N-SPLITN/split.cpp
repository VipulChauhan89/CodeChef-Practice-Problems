/*
    Kulyash is given an integer N. His task is to break N into some number of (integer) powers of 2.
    TO achieve this, he can perform the following operation several times (possibly, zero):
        Choose an integer X which he already has, and break X into 2 integer parts (Y and Z) such that X=Y+Z.
    Find the minimum number of operations required by Kulyash to accomplish his task.
*/
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
	   cin>>N;
	   cout<< __builtin_popcount(N)-1<<endl;
	}
	return 0;
}