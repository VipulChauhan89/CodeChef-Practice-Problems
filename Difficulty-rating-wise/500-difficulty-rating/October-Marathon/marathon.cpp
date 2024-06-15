#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int X;
	cin>>X;
	cout<<((X<3)?"GOLD":((X>=3 && X<6)?"SILVER":"BRONZE"))<<endl;
	return 0;
}