/*
    Chef participated in a contest and got a rank X. Chef is trying to find his name in the ranklist but there are too many pages.
    Each page consists of 25 participants. Chef wants to find the exact page number which contains his name. Help Chef find the page number.
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
	    (X%25==0)?cout<<X/25<<endl:cout<<X/25+1<<endl;
	}
	return 0;
}