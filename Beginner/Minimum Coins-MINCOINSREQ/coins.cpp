/*
  There are only 2 type of denominations in Chefland:
        Coins worth 1 rupee each
        Notes worth 10 rupees each
  Chef wants to pay his friend exactly X rupees. What is the minimum number of coins Chef needs to pay exactly X rupees?
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
	    cout<<X%10<<endl;
	}
	return 0;
}
