/*
  There are N students in a class. Recently, an exam on Advanced Algorithms was conducted with maximum score M and minimum score 0. 
  The average score of the class was found out to be exactly X.
  Given that a student having score strictly greater than the average receives an A grade, find the maximum number of students that can receive an A grade.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,M,X;
	cin>>T;
	while(T--)
	{
	    cin>>N>>M>>X;
	    (M==X)?cout<<0<<endl:cout<<(X*N)/(X+1)<<endl;
	}
	return 0;
}
