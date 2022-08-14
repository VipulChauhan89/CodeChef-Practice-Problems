/*
	Chef has scored A,B, and C marks in 3 different subjects respectively.
	Chef will fail if the average score of any two subjects is less than 35. Determine whether Chef will pass or fail.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	double A,B,C;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B>>C;
	    (((A+B+C-max({A,B,C}))/2)<35)?cout<<"Fail"<<endl:cout<<"Pass"<<endl;
	}
	return 0;
}