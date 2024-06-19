#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,Y,Z;
	cin>>T;
	while(T--)
	{
	    int X,Y,Z;
	    cin>>X>>Y>>Z;
	    int m=max({X,Y,Z});
	    cout<<((m==X)?"Setter":((m==Y)?"Tester":"Editorialist"))<<endl;
	    
	}
	return 0;
}