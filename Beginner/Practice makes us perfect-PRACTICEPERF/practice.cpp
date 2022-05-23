/*
  Our Chef took the above advice very seriously and decided to set a target for himself. 
          Chef decides to solve at least 10 problems every week for 4 weeks.
  
  Given the number of problems he actually solved in each week over 4 weeks as P1,P2,P3, and P4, output the number of weeks in which Chef met his target.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int P1,P2,P3,P4,count=0;
	cin>>P1>>P2>>P3>>P4;
    if(P1>=10)
	{
	    count++;
	}
	if(P2>=10)
	{
	    count++;
	}
	if(P3>=10)
	{
	    count++;
	}
	if(P4>=10)
	{
	    count++;
	}
	cout<<count<<endl;
	return 0;
}
