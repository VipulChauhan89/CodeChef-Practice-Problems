#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,A,B;
	cin>>T;
	while(T--)
	{
	    cin>>X>>A>>B;
	    cout<<((X<=A+2*B)?"Qualify":"NotQualify")<<endl;
	}
	return 0;
}