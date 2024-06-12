#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int X;
	cin>>X;
	cout<<((X==404)?"NOT FOUND":"FOUND")<<endl;
	return 0;
}