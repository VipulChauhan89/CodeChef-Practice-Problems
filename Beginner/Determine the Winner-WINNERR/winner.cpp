/*
  There is a contest containing 2 problems A and B. 2 strong participants P and Q participated in the contest and solved both the problems.
  P made AC submissions on problems A and B at time instants PA and PB respectively while Q made AC submissions on problems A and B at time instants QA and QB.

  It is given that the time penalty is the minimum time instant at which a participant has solved both the problems. 
  Also the participant with the lower time penalty will have a better rank.
  
  Determine which participant got the better rank or if there is a TIE
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,Pa,Pb,Qa,Qb;
	cin>>T;
	while(T--)
	{
	    cin>>Pa>>Pb>>Qa>>Qb;
	    if(max(Pa,Pb)<max(Qa,Qb))
	    {
	        cout<<"P"<<endl;
	    }
	    else if(max(Pa,Pb)>max(Qa,Qb))
	    {
	        cout<<"Q"<<endl;
	    }
	    else
	    {
	        cout<<"TIE"<<endl;
	    }
	}
	return 0;
}
