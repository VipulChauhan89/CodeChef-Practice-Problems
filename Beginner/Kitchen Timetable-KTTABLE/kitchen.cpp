/*
  Program to output a single line containing the number of students that will be able to finish the cooking.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,i,num,count;
	cin>>T;
	while(T--)
	{
	    count=0;
	    cin>>N;
	    int a[N];
	    for(i=0;i<N;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<N;i++)
	    {
	        cin>>num;
	        if(num<=a[i] && i==0)
	        {
	            count++;
	        }
	        else if(num<=a[i]-a[i-1])
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
