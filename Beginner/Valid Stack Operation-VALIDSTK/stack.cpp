/*
  You have a stack which is initially empty. You receive instructions of the form 1 or 0. 
  1 denotes that you have to push in an element, and 0 denotes that you have to pop out an element. 
  But of course you can pop something out only if it exists in the stack. 
  So your job is to look at the instructions and see if they are valid (ie. you never have to pop from an empty stack), or not.
*/
#include <iostream>
#include <map>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,num;
	string s;
	cin>>T;
	while(T--)
	{
	    s="Valid";
	    map<int,int> m;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>num;
	        m[num]++;
	        if(m[0]>m[1])
	        {
	            s="Invalid";
	        }
	    }
	    cout<<s<<endl;
	}
	return 0;
}
