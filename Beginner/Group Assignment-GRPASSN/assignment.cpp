/*
  Chef is hosting a party at his house and N people are invited to it. Everyone has arrived and they are eager to make a group and chit-chat.
  The ith person prefers to be in a group of exactly Pi people (including himself). A person who is not in a group of preferred size gets upset. 
  Find whether Chef would be able to assign every person to a group such that everyone remains happy.
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,num;
	cin>>T;
	while(T--)
	{
	   string s="YES";
	   cin>>N;
	   unordered_map<int,int> m;
	   for(int i=0;i<N;i++)
	   {
	       cin>>num;
	       m[num]++;
	   }
	   for(auto it:m)
	   {
	       if(it.second%it.first!=0)
	       {
	            s="NO";
	            break;
	       }
	   }
	   cout<<s<<endl;
	}
	return 0;
}
