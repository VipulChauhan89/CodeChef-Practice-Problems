/*
  Recently Chef joined a new company. In this company, the employees have to work for X hours each day from Monday to Thursday. 
  Also, in this company, Friday is called Chill Day — employees only have to work for Y hours (Y<X) on Friday. Saturdays and Sundays are holidays.
  Determine the total number of working hours in one week.
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
	    cout<<4*X+Y<<endl;
	}
	return 0;
}
