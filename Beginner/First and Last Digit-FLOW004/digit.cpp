/*
  program to print the sum of first and last digit of the number
*/
#include <iostream>
using namespace std;
int main() 
{
	int T,num,sum;
	cin>>T;
	while(T--)
	{
	    sum=0;
	    cin>>num;
	    sum+=num%10;
	    while(num>9)
	    {
	        num/=10;
	    }
	    sum+=num;
	    cout<<sum<<endl;
	}
	return 0;
}
