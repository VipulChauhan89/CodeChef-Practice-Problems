#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	double X,N;
	cin>>T;
	while(T--)
	{
        cin>>X>>N;
        cout<<((N<=X*100)?0:ceil((N-X*100)/100))<<endl;
	}
	return 0;
}