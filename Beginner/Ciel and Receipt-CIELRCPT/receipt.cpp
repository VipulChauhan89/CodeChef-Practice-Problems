/*
  program for each test case, print the minimum number of menus whose total price is exactly p.
*/
#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int T,sum,money;
	vector<int> a={2048,1024,512,256,128,64,32,16,8,4,2,1};
	cin>>T;
	while(T--)
	{
	    sum=0;
	    cin>>money;
	    for(int i=0;i<12;i++)
	    {
	        sum+=money/a[i];
	        money%=a[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
