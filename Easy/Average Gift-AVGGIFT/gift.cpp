/*
  Chef has a set S containing N distinct integers.Chef wants to gift Chefina an array A of any finite length such that the following conditions hold true:
          Ai ∈ S ∀i. In other words, each element of the array A should belong to the set S.
          Mean value of all the elements in A is exactly X.
  Find whether there exists an array A of finite length satisfying the above conditions.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,X;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X;
	    int S[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>S[i];
	    }
	    int mx=*max_element(S,S+N);
	    int mn=*min_element(S,S+N);
	    (X<=mx && X>=mn)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
