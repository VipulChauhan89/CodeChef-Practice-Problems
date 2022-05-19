/*
  Chef has been participating regularly in rated contests but missed the last two contests due to his college exams. 
  He now wants to solve them and so he visits the practice page to view these problems.
  Given a list of N contest codes, where each contest code is either START38 or LTIME108, help Chef count how many problems were featured in each of the contests.
*/
#include <iostream>
#include <map>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	string s;
	cin>>T;
	while(T--)
	{
	    map<string,int> m;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>s;
	        m[s]++;
	    }
	    cout<<m["START38"]<<" "<<m["LTIME108"]<<endl;
	}
	return 0;
}
