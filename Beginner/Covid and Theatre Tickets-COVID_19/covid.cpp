/*
Mr. Chef is the manager of the Code cinemas and after a long break, the theatres are now open to the public again. 
To compensate for the loss in revenue due to Covid-19, Mr. Chef wants to maximize the profits for every show from now on and at the same time follow the guidelines set the by government. 
The guidelines are:

If two people are seated in the same row, there must be at least one empty seat between them.
If two people are seated in different rows, there must be at least one completely empty row between them. That is, if there are people seated in rows i and j where i<j, there must be some row k such that i<k<j and nobody is seated in row k.
Given the information about the number of rows and the number of seats in each row, find the maximum number of tickets Mr. Chef can sell.
*/
#include <iostream>
using namespace std;
int main() 
{
    int T,i,j,M,N,sum;
    cin>>T;
    while(T--)
    {
        sum=0;
        cin>>M>>N;
        for(i=0;i<M;i=i+2)
        {
            for(j=0;j<N;j=j+2)
            {
                sum+=1;
            }
        }
        cout<<sum<<endl;
    }
	return 0;
}
