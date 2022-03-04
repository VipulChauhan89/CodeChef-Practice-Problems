/*
  After the phenomenal success of the 36th Chamber of Shaolin, San Te has decided to start 37th Chamber of Shaolin. 
  The aim this time is to equip women with shaolin self-defence techniques.
  The only condition for a woman to be eligible for the special training is that she must be between 10 and 60 years of age, inclusive of both 10 and 60.

  Given the ages of N women in his village, program to help San Te find out how many of them are eligible for the special training.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,count;
	cin>>T;
	while(T--)
	{
	    count=0;
	    cin>>N;
	    int arr[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]>=10 && arr[i]<=60)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
