/*
	Alice has scored X marks in her test and Bob has scored Y marks in the same test. Alice is happy if she scored at least twice the marks of Bob’s score. Determine whether she is happy or not.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int X,Y;
	cin>>X>>Y;
	(X>=2*Y)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	return 0;
}