/*
    Bob has an account in the Bobby Bank. His current account balance is W rupees.
    Each month, the office in which Bob works deposits a fixed amount of X rupees to his account.
    Y rupees is deducted from Bob's account each month as bank charges.
    Find his final account balance after Z months. Note that the account balance can be negative as well.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,W,X,Y,Z;
	cin>>T;
	while(T--)
	{
	    cin>>W>>X>>Y>>Z;
	    cout<<W+Z*(X-Y)<<endl;
	}
	return 0;
}