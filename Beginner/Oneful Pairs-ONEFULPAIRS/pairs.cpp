#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int a,b;
	cin>>a>>b;
	(a+b+(a*b)==111)?cout<<"Yes"<<endl:cout<<"No"<<endl;
	return 0;
}
