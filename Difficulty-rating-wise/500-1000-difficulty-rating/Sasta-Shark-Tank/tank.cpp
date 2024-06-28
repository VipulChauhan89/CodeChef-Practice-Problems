#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B;
	    A=A*10;
	    B=B*5;
	    cout<<((A>B)?"FIRST":((A<B)?"SECOND":"ANY"))<<endl;
	}
	return 0;
}