/*
  For a positive integer M, MoEngage defines 𝚍𝚒𝚐𝚒𝚝𝚂𝚞𝚖(𝙼) as the sum of digits of the number M (when written in decimal).
  Given a positive integer N, find the smallest integer X strictly greater than N such that: 𝚍𝚒𝚐𝚒𝚝𝚂𝚞𝚖(𝙽) and 𝚍𝚒𝚐𝚒𝚝𝚂𝚞𝚖(𝚇) have different parity, 
  i.e. one of them is odd and the other is even.
*/
#include <iostream>
using namespace std;
int sum(int x)
{
    int sum=0;
    while(x>0)
    {
        sum+=x%10;
        x/=10;
    }
    return sum;
}
int main() 
{
	long int T,N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    if(sum(N)%2==0)
	    {
	        while(sum(N)%2!=1)
	        {
	            N++;
	        }
	    }
	    else
	    {
	        while(sum(N)%2!=0)
	        {
	            N++;
	        }
	    }
	    cout<<N<<endl;
	}
	return 0;
}
