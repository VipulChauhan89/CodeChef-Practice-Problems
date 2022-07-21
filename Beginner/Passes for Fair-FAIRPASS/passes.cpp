/*
  There is a fair going on in Chefland. Chef wants to visit the fair along with his N friends. Chef manages to collect K passes for the fair. 
  Will Chef be able to enter the fair with all his N friends? A person can enter the fair using one pass, and each pass can be used by only one person.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,K;
	cin>>T;
	while(T--)
	{
	    cin>>N>>K;
	    (K>N)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
