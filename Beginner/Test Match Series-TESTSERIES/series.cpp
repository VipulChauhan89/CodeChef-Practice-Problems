/*
  A 5 match test series between India and England has just concluded.
  Every match could have ended either as a win for India, a win for England, or a draw. You know the result of all the matches. 
  Determine who won the series or if it ended in a draw.

  A team is said to have won the series if it wins strictly more test matches than the other team.
*/
#include <iostream>
#include <map>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,R;
	cin>>T;
	while(T--)
	{
	    map<int,int> m;
	    for(int i=0;i<5;i++)
	    {
	        cin>>R;
	        m[R]++;
	    }
	    if(m[1]>m[2])
	    {
	        cout<<"INDIA"<<endl;
	    }
	    else if(m[2]>m[1])
	    {
	        cout<<"ENGLAND"<<endl;
	    }
	    else
	    {
	        cout<<"DRAW"<<endl;
	    }
	}
	return 0;
}
