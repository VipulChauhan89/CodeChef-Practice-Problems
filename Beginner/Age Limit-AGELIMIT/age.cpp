/*
  Chef wants to appear in a competitive exam. To take the exam, there are following requirements:
        Minimum age limit is X(i.e. Age should be greater than or equal to X).
        Age should be strictly less than Y.
  Chef's current Age is A. Find whether he is currently eligible to take the exam or not.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,Y,A;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y>>A;
	    (A>=X && A<Y)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
