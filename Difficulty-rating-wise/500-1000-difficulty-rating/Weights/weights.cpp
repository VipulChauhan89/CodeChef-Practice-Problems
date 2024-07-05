#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,W,X,Y,Z;
	cin>>T;
	while(T--)
	{
	    cin>>W>>X>>Y>>Z;
	    cout<<(((W==X) || (W==Y) || (W==Z) || (W==X+Y) || (W==Y+Z) || (W==X+Z) || (W==X+Y+Z))?"YES":"NO")<<endl;
	}
	return 0;
}