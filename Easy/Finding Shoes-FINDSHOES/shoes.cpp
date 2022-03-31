/*
  Chef has N friends. Chef promised that he would gift a pair of shoes (consisting of one left shoe and one right shoe) to each of his N friends. 
  Chef was about to go to the marketplace to buy shoes, but he suddenly remembers that he already had M left shoes.

  Find the minimum number of extra shoes that Chef will have to buy to ensure that he is able to gift a pair of shoes to each of his N friends?
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,M;
	cin>>T;
	while(T--)
	{
	    cin>>N>>M;
	    if(M>=N)
	    {
	        cout<<N<<endl;
	    }
	    else
	    {
	        cout<<N+(N-M)<<endl;
	    }
	}
	return 0;
}
