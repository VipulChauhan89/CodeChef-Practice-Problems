/*
    Uttu broke his phone. He can get it repaired by spending X rupees or he can buy a new phone by spending Y rupees. 
    Uttu wants to spend as little money as possible. Find out if it is better to get the phone repaired or to buy a new phone.
*/
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
	    if(X==Y)
	    {
	        cout<<"ANY"<<endl;
	    }
	    if(X<Y)
	    {
	        cout<<"REPAIR"<<endl;
	    }
	    else if(X>Y)
	    {
	        cout<<"NEW PHONE"<<endl;
	    }
	}
	return 0;
}