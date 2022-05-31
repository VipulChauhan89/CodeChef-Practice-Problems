/*
  Chef wants to host some Division-3 contests. Chef has N setters who are busy creating new problems for him. The ith setter has made Ai problems where 1≤i≤N.
  A Division-3 contest should have exactly K problems. Chef wants to plan for the next D days using the problems that they have currently. 
  But Chef cannot host more than one Division-3 contest in a day.
  
  Given these constraints, can you help Chef find the maximum number of Division-3 contests that can be hosted in these D days?
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,K,D,num;
	unsigned long int sum;
	cin>>T;
	while(T--)
	{
	    sum=0;
	    cin>>N>>K>>D;
	    for(int i=0;i<N;i++)
	    {
	        cin>>num;
	        sum+=num;
	    }
	    if(sum<K)
	    {
	        cout<<0<<endl;
	    }
	    else if(sum/K>=D)
	    {
	        cout<<D<<endl;
	    }
	    else
	    {
	        cout<<sum/K<<endl;
	    }
	}
	return 0;
}
