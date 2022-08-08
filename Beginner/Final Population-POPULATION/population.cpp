/*
	There were initially X million people in a town, out of which Y million people left the town and Z million people immigrated to this town.
	Determine the final population of town in millions.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,Y,Z;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y>>Z;
	    cout<<X-Y+Z<<endl;
	}
	return 0;
}