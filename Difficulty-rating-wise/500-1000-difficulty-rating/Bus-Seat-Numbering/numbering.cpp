#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    cout<<((N<=15)?"Lower":"Upper")<<" "<<(((N>=11 && N<=15) || (N>=26 && N<=30)?"Single":"Double"))<<endl;
	}
	return 0;
}