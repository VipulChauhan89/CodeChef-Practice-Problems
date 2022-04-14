/*
  Dazzler has a blank canvas and (N−1) colours numbered from 2 to N. Let B denote the beauty of the canvas. The beauty of a blank canvas is 1.
  Dazzler paints the canvas by using all the (N−1) colours exactly once. On applying the ith colour (2≤i≤N):
  If i is odd, B=B & i.
  If i is even, B=B⊕i.
  Find the beauty of the canvas after applying all (N−1) colours.

  Note: The colours are applied in ascending order. Colour number 2 is applied first. The ith numbered colour is applied after (i−1)th numbered colour for all i>2.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T;
	unsigned long long int N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    if(N%4==1)
	    {
	        cout<<N<<endl;
	    }
	    else if((N%4==3)||(N%4==2))
	    {
	        cout<<3<<endl;
	    }
	    else if(N%4==0)
	    {
	        cout<<N+3<<endl;
	    }
	}
	return 0;
}
