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
	    cout<<(X*Y)+(((X%3==0)?X/3-1:X/3)*Z)<<endl;
	}
	return 0;
}