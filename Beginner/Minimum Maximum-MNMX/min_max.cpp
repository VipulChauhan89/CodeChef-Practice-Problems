/*
  Program to 
  Select a pair of adjacent integers and remove the larger one of these two. This decreases the array size by 1. Cost of this operation will be equal to the smaller of them.
  Find out minimum sum of costs of operations needed to convert the array into a single element.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int T,N,i;
    cin>>T;
    while(T--)
    {
        cin>>N;
        long long int arr[N];
        for(i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+N);
        cout<<arr[0]*(N-1)<<endl;
    }
	return 0;
}
