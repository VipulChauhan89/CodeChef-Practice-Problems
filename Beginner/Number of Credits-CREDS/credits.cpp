/*
	In the current semester, you have taken X RTP courses, Y Audit courses and Non-RTP courses. The credit distribution for the courses are:
				4 credits for clearing each RTP course.
				2 credits for clearing each Audit course.
				No credits for clearing a Non-RTP course.
	Assuming that you cleared all your courses, report the number of credits you obtain this semester.
*/
#include <iostream>
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
	    cout<<(X*4)+(Y*2)<<endl;
	}
	return 0;
}