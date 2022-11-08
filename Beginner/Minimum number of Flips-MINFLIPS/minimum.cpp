/*
    Chef has an array A of length N consisting of 1 and −1 only. In one operation, Chef can choose any index (1 ≤ i ≤N) and multiply the element Ai by −1.
    Find the minimum number of operations required to make the sum of the array equal to 0. Output -1 if the sum of the array cannot be made 0.
*/
#include <iostream>
#include <map>
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
	        m[num]++;
	    }
	    if(N%2==1)
	    {
	        cout<<-1<<endl;
	    }
	    else
	    {
	        cout<<(N/2)-min(m[-1],m[1])<<endl;
	    }
	}
	return 0;
}