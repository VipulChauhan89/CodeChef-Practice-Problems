//You are given four integers a, b, c and d. Determine if there's a rectangle such that the lengths of its sides are a, b, c and d (in any order).
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
	    int rec[4];
	    cin>>rec[0]>>rec[1]>>rec[2]>>rec[3];
	    sort(rec,rec+4);
	    if(rec[0]==rec[1] && rec[2]==rec[3])
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
