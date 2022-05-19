/*
  There are two problems in a contest.
          Problem A is worth 500 points at the start of the contest.
          Problem B is worth 1000 points at the start of the contest.
  Once the contest starts, after each minute:
          Maximum points of Problem A reduce by 2 points .
          Maximum points of Problem B reduce by 4 points.
  It is known that Chef requires X minutes to solve Problem A correctly and Y minutes to solve Problem B correctly.

  Find the maximum number of points Chef can score if he optimally decides the order of attempting both the problems.
*/
#include <iostream>
#include <algorithm>
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
	    int a1=(500-(X*2))+(1000-((X+Y)*4));
	    int a2=(1000-(Y*4))+(500-((X+Y)*2));
	    cout<<max(a1,a2)<<endl;
	}
	return 0;
}
