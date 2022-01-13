//program to find the second largest element out of three for T test cases
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	int T,num,n;
	cin>>T;
	vector <int> a;
	while(T--)
	{
	    n=3;
	    while(n--)
	    {
	        cin>>num;
	        a.push_back(num);
	    }
	    sort(a.begin(),a.end());
	    cout<<a[1]<<endl;
	    a.erase(a.begin(),a.end());
	}
	return 0;
}
