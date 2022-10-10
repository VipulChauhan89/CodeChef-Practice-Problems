/*
    On every CodeChef user's profile page, the list of problems that they have set, tested, and written editorials for, is listed at the bottom. Given the number of problems in each of these 
    3 categories as X,Y, and Z respectively (where all three integers are distinct), find if the user has been most active as a Setter, Tester, or Editorialist.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,Y,Z;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y>>Z;
	    int m=max({X,Y,Z});
	    if(m==X)
	    {
	        cout<<"Setter"<<endl;
	    }
	    else if(m==Y)
	    {
	        cout<<"Tester"<<endl;
	    }
	    else
	    {
	        cout<<"Editorialist"<<endl;
	    }
	}
	return 0;
}