/*
  The snakes want to build a temple for Lord Cobra. There are multiple strips of land that they are looking at, but not all of them are suitable. 
  They need the strip of land to resemble a coiled Cobra. You need to find out which strips do so.
  Formally, every strip of land, has a length. Suppose the length of the i-th strip is is Ni, then there will be Ni integers, Hi1, Hi2, .. HiNi, 
  which represent the heights of the ground at various parts of the strip, in sequential order. That is, the strip has been divided into Ni parts and the height of each part is given. 
  This strip is valid, if and only if all these conditions are satisfied:
          There should be an unique 'centre' part. This is where the actual temple will be built. By centre, we mean that there should be an equal number of parts to the left of this part, and to the right of this part.
          Hi1 = 1
          The heights keep increasing by exactly 1, as you move from the leftmost part, to the centre part.
          The heights should keep decreasing by exactly 1, as you move from the centre part to the rightmost part. Note that this means that HiNi should also be 1.
  Your job is to look at every strip and find if it's valid or not.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	string ans;
	cin>>T;
	while(T--)
	{
	    ans="yes";
	    cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    if(N%2!=0)
	    {
	        int count=1,i=0,j=N-1;
	        while(i<=j)
	        {
	            if(A[i]!=count || A[j]!=count)
	            {
	                ans="no";
	                break;
	            }
	            else
	            {
	                i++;
	                j--;
	                count++;
	            }
	        }
	    }
	    else
	    {
	        ans="no";
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
