#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y;
	    cout<<((X<Y)?"FIRST":((X>Y)?"SECOND":"ANY"))<<endl;
	}
	return 0;
}