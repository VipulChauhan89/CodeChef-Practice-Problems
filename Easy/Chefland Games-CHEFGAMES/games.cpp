/*
	In Chefland, a tennis game involves 4 referees. Each referee has to point out whether he considers the ball to be inside limits or outside limits. 
	The ball is considered to be IN if and only if all the referees agree that it was inside limits. Given the decision of the 4 referees, help Chef determine whether the ball is considered inside limits or not.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,R1,R2,R3,R4;
	cin>>T;
	while(T--)
	{
	    cin>>R1>>R2>>R3>>R4;
	    (R1==0 && R2==0 && R3==0 && R4==0)?cout<<"IN"<<endl:cout<<"OUT"<<endl;
	}
	return 0;
}