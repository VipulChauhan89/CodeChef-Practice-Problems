/*
  Everybody is worried about Rakesh as the boy does not have much knowledge about the real world. He can not go from one place to another on his own. 
  It's high time he learned to explore the city. He is going to a relative's house situated on the other side of the city on his own. 
  As this is his first time, he is carrying a GPS tracker of a special kind. 
  The tracker continuously sends information to the family of Rakesh about his movement. 
  The information is sent using the following four letters: U, D, R, and L. Those letters indicate the moves taken by Rakesh.
  The city can be considered as a grid. Rakesh starts his journey from (0, 0) position of the grid. His relative's house is situated at (Rx, Ry). 
  Rakesh can move in four directions: up, down, right, or left indicated by U, D, R, and L respectively.
  Any position of the city with x ordinate negative or greater than M is considered as dangerous. 
  Also, any position of the city with y ordinate negative or greater than N is considered as dangerous.You will be given the total sequence of Rakesh's movement. 
  You need to determine if Rakesh ended up being at his relative's house, at a dangerous place, or at a random place in the city.
  To make things clear,
        U indicates a move that increases position along y-axis by 1
        D indicates a move that decreases position along y-axis by 1
        R indicates a move that increases position along x-axis by 1
        L indicates a move that decreases position along x-axis by 1
  Note that we are interested in the position of Rakesh at the end of his journey only. 
  He may visit some dangerous place or his relative's house at some intermediate point but that won't affect the answer.
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unordered_map<char,pair<int,int> > m;
    m['U']={0,1};
    m['D']={0,-1};
    m['R']={1,0};
    m['L']={-1,0};
	int T,M,N,Rx,Ry,n,count=1;
	string sequence;
	cin>>T;
	while(T--)
	{
	    m['A']={0,0};
	    cin>>M>>N>>Rx>>Ry>>n>>sequence;
	    for(auto c:sequence)
	    {
	        m['A'].first+=m[c].first;
	        m['A'].second+=m[c].second;
	    }
	    if(m['A'].first==Rx && m['A'].second==Ry)
	    {
	        cout<<"Case "<<count<<": "<<"REACHED"<<endl;
	    }
	    else if(m['A'].first>=0 && m['A'].first<=M && m['A'].second>=0 && m['A'].second<=N && m['A'].first!=Rx && m['A'].second!=Ry)
	    {
	        cout<<"Case "<<count<<": "<<"SOMEWHERE"<<endl;
	    }
	    else
	    {
	        cout<<"Case "<<count<<": "<<"DANGER"<<endl;
	    }
	    count++;
	}
	return 0;
}
