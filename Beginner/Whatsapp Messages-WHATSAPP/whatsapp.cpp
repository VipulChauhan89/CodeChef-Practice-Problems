/*
  Chef recently installed Whatsapp on his mobile device. Currently, he has no unread messages.
  Every hour, he receives X messages and he is able to read Y messages out of them. After some time Chef notices that he has several unread messages.

  Can you tell him exactly how many unread messages Chef has after Z hours have passed?
*/
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
	    cout<<(X-Y)*Z<<endl;
	}
	return 0;
}
