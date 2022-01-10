//program to sort n numbers in non decreasing order
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() 
{
	int T,num,n;
	vector<int> a;
	cin>>T;
	n=T;
	while(T--)
	{
	    cin>>num;
	    a.push_back(num);
	}
	sort(a.begin(),a.end());
	for(T=0;T<n;T++)
	{
	    cout<<a[T]<<endl;
	}
	return 0;
}
