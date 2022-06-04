/*
  Snackdown 2019 is coming! There are two rounds (round A and round B) after the qualification round. From both of them, teams can qualify to the pre-elimination round. 
  According to the rules, in each of these two rounds, teams are sorted in descending order by their score and each team with a score greater or equal to the score of the 
  team at the K=1500-th place advances to the pre-elimination round (this means it is possible to have more than K qualified teams from each round in the case of one or more ties after the K-th place).

  Today, the organizers ask you to count the number of teams which would qualify for the pre-elimination round from round A for a given value of K(possibly different from 1500). 
  They provided the scores of all teams to you; you should ensure that all teams scoring at least as many points as the K-th team qualify.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,K;
	cin>>T;
	while(T--)
	{
	    cin>>N>>K;
	    vector<int> S(N);
	    for(int i=0;i<N;i++)
	    {
	        cin>>S[i];
	    }
	    sort(S.begin(),S.end());
	    long int x=S[N-K],count=0;
	    for(int i=N-1;i>=0;i--)
	    {
	        if(S[i]>=x)
	        {
	            count++;
	        }
	        else
	        {
	            break;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
