/*
	Alice has a positive integer N. She is wondering how many ordered pairs of positive integers (i,j) exist such that i+j=N. Help Alice figure out the answer.
	Note that since the pairs are ordered, (1,2) and (2,1) are considered different.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int N,count=0;
	cin>>N;
	for(int i=1;i<N;i++)
	{
	    for(int j=1;j<N;j++)
	    {
	        if(i+j==N)
	        {
	            count++;
	        }
	    }
	}
	cout<<count<<endl;
	return 0;
}