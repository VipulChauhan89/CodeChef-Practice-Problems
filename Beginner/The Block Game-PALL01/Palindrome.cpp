/*
program to print "wins" if the number is a palindrome and "loses" if not, in a new line.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,num,rev,palin,r;
	cin>>T;
	while(T--)
	{
	    cin>>num;
	    rev=num;
	    palin=0;
	    while(rev!=0)
	    {
	        r=rev%10;
	        palin=palin*10+r;
	        rev=rev/10;
	    }
	    if(palin==num)
	    {
	        cout<<"wins"<<endl;
	    }
	    else
	    {
	        cout<<"loses"<<endl;
	    } 
	}
	return 0;
}
