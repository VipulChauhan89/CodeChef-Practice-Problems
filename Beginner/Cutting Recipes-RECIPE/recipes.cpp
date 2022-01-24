/*
  program for each test case, output exactly N space-separated integers on a line, 
  giving the quantity of each ingredient that the chef should use in order to make as little food as possible.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,n,gcd;
	cin>>T;
	while(T--)
	{
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    gcd=__gcd(arr[0],arr[1]);
	    for(int i=2;i<n;i++)
	    {
	        gcd=__gcd(gcd,arr[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr[i]/gcd<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
