/*
	Chef rented a car for a day. Usually, the cost of the car is Rs 10 per km. However, since Chef has booked the car for the whole day, 
	he needs to pay for at least 300 kms even if the car runs less than 300 kms. If the car ran X  kms, determine the cost Chef needs to pay.
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
	    (X<=300)?cout<<3000<<endl:cout<<X*10<<endl;
	}
	return 0;
}