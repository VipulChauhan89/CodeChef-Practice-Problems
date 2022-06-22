/*
  Chef appeared for a placement test.There is a problem worth X points. Chef finds out that the problem has exactly10 test cases. 
  It is known that each test case is worth the same number of points.
  Chef passes N test cases among them. Determine the score Chef will get.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,N;
	cin>>T;
	while(T--)
	{
	   cin>>X>>N; 
	   cout<<(X/10)*N<<endl;
	}
	return 0;
}
