/*
  Chef took an examination two times. In the first attempt, he scored X marks while in the second attempt he scored Y marks. 
  According to the rules of the examination, the best score out of the two attempts will be considered as the final score.
  Determine the final score of the Chef.
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
	    cout<<max(X,Y)<<endl;
	}
	return 0;
}
