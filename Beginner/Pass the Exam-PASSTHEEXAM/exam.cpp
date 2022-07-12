/*
  Chef appeared for an exam consisting of 3 sections. Each section is worth 100 marks.
  Chef scored A marks in Section 1, B marks in section 2, and C marks in section 3.
  Chef passes the exam if both of the following conditions satisfy:
          Total score of Chef is ≥100;
          Score of each section ≥10.
  Determine whether Chef passes the exam or not.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B,C;
	string ans;
	cin>>T;
	while(T--)
	{
	    ans="PASS";
	    cin>>A>>B>>C;
	    if(min({A,B,C})<10 || A+B+C<100)
	    {
	        ans="FAIL";
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
