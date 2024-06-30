#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int X,Y;
	cin>>X>>Y;
	Y/=2;
	cout<<X-Y<<endl;
	return 0;
}