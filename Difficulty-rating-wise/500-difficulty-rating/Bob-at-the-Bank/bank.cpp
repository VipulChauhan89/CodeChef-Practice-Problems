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
	   cout<<((W+((X-Y)*Z)))<<endl;
	}
	return 0;
}