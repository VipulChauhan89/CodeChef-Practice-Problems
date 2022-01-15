/*
if the number is less than 10 then display "Thanks for helping Chef!" otherwise print "-1".
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,num;
	cin>>T;
	while(T--)
	{
	    cin>>num;
	    if(num<10)
	    {
	        cout<<"Thanks for helping Chef!"<<endl;
	    }
	    else
	    {
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}
