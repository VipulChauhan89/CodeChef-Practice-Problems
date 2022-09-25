/*
    Chef is not feeling well today. He measured his body temperature using a thermometer and it came out to be X °F.
    A person is said to have fever if his body temperature is strictly greater than 98 °F.
    Determine if Chef has fever or not.
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
	   (X>98)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}