/*
  I have a habit of asking for discounts when I'm buying something. Before you rush to call me a miser, 
  let me tell you that I only ask for discounts if I have to pay at least 10 Rs, since asking for a discount on something that can be paid with just a few coins is really rude.
  One day, I was supposed to pay N Rs, but the shopkeeper gave me an unusual offer - he told me that I can remove one of the digits in the decimal representation of N
  and pay only the resulting price. I am trying to figure out the minimum price I have to pay if I choose the digit to remove optimally. Would you help me, please?

  Note that the resulting number after removing digit is allowed to have leading zeros. But while outputting the answer, there should be no leading
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,len,i,j;
	cin>>T;
	string N,ans;
	while(T--)
	{
	    ans="";
	    cin>>N;
	    len=N.length();
	    for(i=0;i<len-1;i++)
	    {
	        if(N[i]>N[i+1])
	        {
	            break;
	        }
	        else
	        {
	            ans+=N[i];
	        }
	    }
	    for(j=i+1;j<len;j++)
	    {
	        ans+=N[j];
	    }
	    ;
	    cout<<stoi(ans)<<endl;
	}
	return 0;
}
