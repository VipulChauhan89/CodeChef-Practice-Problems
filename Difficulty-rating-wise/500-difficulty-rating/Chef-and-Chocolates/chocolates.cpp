#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,C,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>C>>X>>Y;
	    cout<<(C-X)*Y<<endl;
	}
	return 0;
}