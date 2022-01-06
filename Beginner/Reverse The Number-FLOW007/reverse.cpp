/*
  program to reverse the number
*/
#include <iostream>
using namespace std;
int main() 
{
	int T,num,rev,rem;
	cin>>T;
	while(T--)
	{
	    rev=0;
	    cin>>num;
	    while(num!=0)
	    {
	        rem=num%10;
	        rev=rev*10+rem;
	        num/=10;
	    }
	    cout<<rev<<endl;
	}
	return 0;
}
