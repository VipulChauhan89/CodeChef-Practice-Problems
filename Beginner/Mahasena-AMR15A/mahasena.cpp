/*
Kattapa was known to be a very superstitious person. 
He believed that a soldier is "lucky" if the soldier is holding an even number of weapons, and "unlucky" otherwise. 
He considered the army as "READY FOR BATTLE" if the count of "lucky" soldiers is strictly greater than the count of "unlucky" soldiers, and "NOT READY" otherwise.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,num,e=0,o=0;
	cin>>T;
	while(T--)
	{
	    cin>>num;
	    if(num%2==0)
	    {
	        e++;
	    }
	    else
	    {
	        o++;
	    }
	}
	if(e>o)
	{
	    cout<<"READY FOR BATTLE"<<endl;
	}
	else
	{
	    cout<<"NOT READY"<<endl;
	}
	return 0;
}
