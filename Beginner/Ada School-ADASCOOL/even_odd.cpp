/*
	Ada's classroom contains N⋅M tables distributed in a grid with N rows and M columns. 
	Each table is occupied by exactly one student.

	Before starting the class, the teacher decided to shuffle the students a bit. 
	After the shuffling, each table should be occupied by exactly one student again. 
	In addition, each student should occupy a table that is adjacent to that student's original table, 
	i.e. immediately to the left, right, top or bottom of that table.

	Program to find out that is it possible for the students to shuffle while satisfying all conditions of the teacher?
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,M;
	cin>>T;
	while(T--)
	{
	    cin>>N>>M;
	    if((N*M)%2==0)
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
