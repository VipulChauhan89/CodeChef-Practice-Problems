#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B,C,D;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C>>D;
	    A-=C;
	    B-=D;
	    cout<<((A<B)?"First":(A>B)?"Second":"Any")<<endl;
	}
	return 0;
}