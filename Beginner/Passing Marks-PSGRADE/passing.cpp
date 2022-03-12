/*
  Recently, Chef's College Examination has concluded. He was enrolled in 3 courses and he scored A,B,C in them, respectively. 
  To pass the semester, he must score at least Amin,Bmin,Cmin marks in the respective subjects along with a cumulative score of at least Tmin , i.e, A+B+C≥Tmin.

  Given seven integers Amin,Bmin,Cmin,Tmin,A,B,C.
  Program to tell whether Chef passes the semester or not.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,Amin,Bmin,Cmin,Tmin,A,B,C;
	cin>>T;
	while(T--)
	{
	    cin>>Amin>>Bmin>>Cmin>>Tmin>>A>>B>>C;
	    if(A>=Amin && B>=Bmin && C>=Cmin && A+B+C>=Tmin)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
