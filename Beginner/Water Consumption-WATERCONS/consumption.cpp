/*
    Recently, Chef visited his doctor. The doctor advised Chef to drink at least 2000 ml of water each day. Chef drank X ml of water today. 
    Determine if Chef followed the doctor's advice or not.
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
	    (X>=2000)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}