/*
  To access CRED programs, one needs to have a credit score of 750 or more.
  Given that the present credit score is X, determine if one can access CRED programs or not.

  If it is possible to access CRED programs, output 𝚈𝙴𝚂, otherwise output 𝙽𝙾.
*/
#include <iostream>
using namespace std;

int main() 
{
	int X;
	cin>>X;
	(X>=750)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	return 0;
}
