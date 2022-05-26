/*
  CodeCheffers are aware that after a contest, all problems are moved into the platform’s practice section. 
  Based on user submissions during the contest, the system calculates and assigns a difficulty rating to each problem. 
  Ideally, it is recommended that users practice problems in increasing order of difficulty.

  Our Chef has some students in his coding class who are practicing problems. 
  Given the difficulty of the problems that the students have solved in order, help the Chef identify if they are solving them in non-decreasing order of difficulty. 
  That is, the students should not solve a problem with difficulty d1, and then later a problem with difficulty d2, where d1>d2.

  Output “Yes” if the problems are attempted in non-decreasing order of difficulty rating and “No” if not.
*/
#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	string ans;
	cin>>T;
	while(T--)
	{
	   ans="Yes";
	   cin>>N;
	   vector<int> A(N,0);
	   for(int i=0;i<N;i++)
	   {
	       cin>>A[i];
	       if(i==0)
	       {
	           continue;
	       }
	       else if(A[i-1]>A[i])
	       {
	           ans="No";
	       }
	   }
	   cout<<ans<<endl;
	}
	return 0;
}
