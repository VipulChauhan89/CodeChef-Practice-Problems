/*
  Chef wants to become fit for which he decided to walk to the office and return home by walking. It is known that Chef's office is X km away from his home.
  If his office is open on 5 days in a week, find the number of kilometers Chef travels through office trips in a week.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X;
	cin>>T;
	while(T--)
	{
	    cin>>X;
	    cout<<X*10<<endl;
	}
	return 0;
}
