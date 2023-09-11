#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int X,Y;
	cin>>X>>Y;
	if(Y<X)
	{
	    cout<<"New"<<endl;
	}
	else if(Y==X)
	{
	    cout<<"Same"<<endl;
	}
	else
	{
	    cout<<"Old"<<endl;
	}
	return 0;
}
