/*
    There is a cricket match going on between two teams A and B.Team B is batting second and got a target of X runs. Currently, team B has scored Y runs. 
    Determine how many more runs Team B should score to win the match.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y;
	    cout<<X-Y<<endl;
	}
	return 0;
}