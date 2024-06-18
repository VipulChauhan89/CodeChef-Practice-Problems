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
	    X*=100;
	    Y*=10;
	    cout<<((X<Y)?"Disposable":"Cloth")<<endl;
	}
	return 0;
}