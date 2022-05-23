/*
  In a coding contest, there are prizes for the top rankers. The prize scheme is as follows:
          Top 10 participants receive rupees X each.
          Participants with rank 11 to 100 (both inclusive) receive rupees Y each.
  Find the total prize money over all the contestants.
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
	    X*=10;
	    Y*=90;
	    X+=Y;
	    cout<<X<<endl;
	}
	return 0;
}
