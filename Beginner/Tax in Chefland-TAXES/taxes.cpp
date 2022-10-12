/*
    In Chefland, a tax of rupees 10 is deducted if the total income is strictly greater than rupees 100.
    Given that total income is X rupees, find out how much money you get.
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
	    (X<=100)?cout<<X<<endl:cout<<X-10<<endl;
	}
	return 0;
}