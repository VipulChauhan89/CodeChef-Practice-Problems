/*
	Chef has a rectangular plate of length N cm and width M cm. He wants to make a wireframe around the plate. The wireframe costs X rupees per cm.
	Determine the cost Chef needs to incur to buy the wireframe.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,M,X;
	cin>>T;
	while(T--)
	{
	    cin>>N>>M>>X;
	    cout<<2*X*(N+M)<<endl;
	}
	return 0;
}