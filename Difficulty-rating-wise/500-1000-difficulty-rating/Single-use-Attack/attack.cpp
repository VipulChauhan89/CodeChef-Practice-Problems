#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,H,X,Y;
	cin>>T;
	while(T--)
	{
        cin>>H>>X>>Y;
        int attacks=ceil((H-Y)/(X*1.0))+1;
        if(Y>=H)
        {
            attacks=1;
        }
        cout<<attacks<<endl;
	}
	return 0;
}