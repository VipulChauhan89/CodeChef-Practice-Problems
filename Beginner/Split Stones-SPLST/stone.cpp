/*
	There are three piles of stones. The first pile contains a stones, the second pile contains b stones and the third pile contains c stones. 
	You must choose one of the piles and split the stones from it to the other two piles; specifically, if the chosen pile initially contained s stones, 
	you should choose an integer k (0≤k≤s), move k stones from the chosen pile onto one of the remaining two piles and s−k stones onto the other remaining pile. 
	Determine if it is possible for the two remaining piles (in any order) to contain x stones and y stones respectively after performing this action.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,a,b,c,x,y;
	cin>>T;
	while(T--)
	{
	    cin>>a>>b>>c>>x>>y;
	    if(a+b+c!=x+y)
	    {
	        cout<<"NO"<<endl;
	    }
	    else if(min({a,b,c})>min(x,y))
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}