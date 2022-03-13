/*
  A hostel has N rooms in a straight line. It has to accommodate X people. 
  Unfortunately, out of these X people, Y of them are infected with chickenpox. Due to safety norms, the following precaution must be taken:

  No person should occupy a room directly adjacent to a room occupied by a chickenpox-infected person. 
  In particular, two chickenpox-infected people cannot occupy adjacent rooms.

  Program to find what's the minimum value of N for which all the people can be accommodated in the hostel, following the above condition?
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,X,Y;
	cin>>T;
	while(T--)
	{
	   cin>>X>>Y;
	   if(X==Y)
	   {
	       cout<<(2*Y)-1<<endl;
	   }
	   else
	   {
	       cout<<X+Y<<endl;
	   }
	}
	return 0;
}
