/*
    Chef is setting up a perfect bath for himself. He has X litres of hot water and Y litres of cold water. The initial temperature of water in his bathtub is A degrees. On mixing water, the temperature of the bathtub changes as following:
            The temperature rises by 1 degree on mixing 1 litre of hot water.
            The temperature drops by 1 degree on mixing 1 litre of cold water.
    Determine whether he can set the temperature to B degrees for a perfect bath.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>X>>Y;
	    (A==B || (A>B && B+Y>=A) || (A<B && A+X>=B))?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}