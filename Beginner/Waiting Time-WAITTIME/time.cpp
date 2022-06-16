/*
  Chef is eagerly waiting for a piece of information. His secret agent told him that this information would be revealed to him after K weeks.
  X days have already passed and Chef is getting restless now. Find the number of remaining days Chef has to wait for, to get the information.
  
  It is guaranteed that the information has not been revealed to the Chef yet.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,K,X;
	cin>>T;
	while(T--)
	{
	    cin>>K>>X;
	    cout<<(K*7)-X<<endl;
	}
	return 0;
}
