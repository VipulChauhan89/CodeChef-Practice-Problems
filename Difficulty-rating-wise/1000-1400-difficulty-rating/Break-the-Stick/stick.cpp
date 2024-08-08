#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,N;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X;
	    cout<<((X%2==0 && (N%2)!=0)?"NO":"YES")<<endl;
	}
	return 0;
}