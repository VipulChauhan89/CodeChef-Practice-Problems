#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int A,B,X,Y;
	cin>>A>>B>>X>>Y;
	int m=A*2+B,r=X*2+Y;
	cout<<((m>r)?"Messi":((m<r)?"Ronaldo":"Equal"))<<endl;
	return 0;
}