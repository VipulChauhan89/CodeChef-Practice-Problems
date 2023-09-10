#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int A,B,X,Y;
	cin>>A>>B>>X>>Y;
	A=A*2+B*1;
	X=X*2+Y*1;
	if(A==X)
	{
	    cout<<"Equal"<<endl;
	}
	else if(A<X)
	{
	    cout<<"Ronaldo"<<endl;
	}
	else
	{
	    cout<<"Messi"<<endl;
	}
	return 0;
}
