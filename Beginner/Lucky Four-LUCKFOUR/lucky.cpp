/*
  count the number of four's in the give number
*/
#include <iostream>
using namespace std;
int main() 
{
	int T,num,count;
	cin>>T;
	while(T--)
	{
	    count=0;
	    cin>>num;
	    while(num!=0)
	    {
	        if(num%10==4)
	        {
	            count++;
	        }
	        num/=10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
