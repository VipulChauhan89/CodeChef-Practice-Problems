/*
    Alice has an array of N integers — A1,A2,…,AN. She wants the product of all the elements of the array to be a non-negative integer. 
    That is, it can be either 0 or positive. But she doesn't want it to be negative.
    To do this, she is willing to remove some elements of the array. Determine the minimum number of elements that she will have to remove to make the product of the array's elements non-negative.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,check,count;
	cin>>T;
	while(T--)
	{
	    count=0;
	    check=0;
	    cin>>N;
	    int A[N];
	    for(int i =0;i<N;i++)
	    {
	        cin>>A[i];
	        if(A[i]==0)
	        {
	            check=1;
	        }
	        else if(A[i]<0)
	        {
	            count++;
	        }
	    }
	    (count%2!=0 && check==0)?cout<<1<<endl:cout<<0<<endl;
	}
	return 0;
}