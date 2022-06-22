/*
  Chef and Chefina are residing in a hotel.There are 10 floors in the hotel and each floor consists of 10 rooms.
        Floor 1 consists of room numbers 1 to 10.
        Floor 2 consists of room numbers 11 to 20.
        …
        Floor i consists of room numbers 10⋅(i−1)+1 to 10⋅i.
  You know that Chef's room number is X while Chefina's Room number is Y.
  If Chef starts from his room, find the number of floors he needs to travel to reach Chefina's room.
*/
#include <iostream>
#include <cmath>
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
	   X=((X-1)/10)+1;
	   Y=((Y-1)/10)+1;
	   X=abs(X-Y);
	   cout<<X<<endl;
	}
	return 0;
}
