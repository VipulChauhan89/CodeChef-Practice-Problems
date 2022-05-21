/*
  You have an array consisting of N integers a1,a2...aN. You may perform the following operation zero or more times.
          Choose any index i (1≤i≤N) and set ai:=ai+1
  Determine the minimum number of operations you have to perform so that all pairwise differences in the resulting array are even. More formally, 
  in the resulting array it should hold that, for every i and j (1≤i,j≤N), ai−aj is even.
*/
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,num;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    map<int,int> m;
	    for(int i=0;i<N;i++)
	    {
	        cin>>num;
	        m[num%2]++;
	    }
	    cout<<min(m[1],m[0])<<endl;
	}
	return 0;
}
