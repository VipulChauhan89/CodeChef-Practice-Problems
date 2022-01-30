/*
  Chef is fan of pairs and he likes all things that come in pairs. 
  He even has a doll collection in which the dolls come in pairs. 
  One day while going through his collection he found that there are odd number of dolls. 
  Someone had stolen a doll!!!

  Program to help chef find which type of doll is missing..
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
	    int arr[N];
	    for(i=0;i<N;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+N);
	    for(i=0;i<N;i=i+2)
	    {
	        if(arr[i]!=arr[i+1])
	        {
	            cout<<arr[i]<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
