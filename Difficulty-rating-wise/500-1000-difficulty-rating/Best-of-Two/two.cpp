#include <iostream>
using namespace std;

int findScore(int d1,int d2,int d3) 
{
    int score=d1+d2+d3;
    int minRoll=min(min(d1,d2),d3);
    score-=minRoll;
    return score;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A1,A2,A3,B1,B2,B3;
	cin>>T;
	while(T--)
	{
	    cin>>A1>>A2>>A3>>B1>>B2>>B3;
	    int aliceScore=findScore(A1,A2,A3),bobScore=findScore(B1,B2,B3);
        if(aliceScore>bobScore) 
        {
            cout<<"Alice"<<endl;
        } 
        else if(aliceScore<bobScore) 
        {
            cout<<"Bob"<<endl;
        } 
        else 
        {
            cout<<"Tie"<<endl;
        }
	}
	return 0;
}