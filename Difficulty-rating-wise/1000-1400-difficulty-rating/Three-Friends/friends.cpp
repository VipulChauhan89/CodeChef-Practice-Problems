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
	    cout<<((X+Y==Z || Y+Z==X || X+Z==Y)?"yes":"no")<<endl;
	}
	return 0;
}