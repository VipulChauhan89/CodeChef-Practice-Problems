/*
  Chef received N candies on his birthday. He wants to put these candies in some bags. A bag has K pockets and each pocket can hold at most M candies. 
  Find the minimum number of bags Chef needs so that he can put every candy into a bag.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,K,M;
	cin>>T;
	while(T--)
	{
	    cin>>N>>K>>M;
	    (N%(K*M)==0)?cout<<N/(K*M)<<endl:cout<<(N/(K*M))+1<<endl;
	}
	return 0;
}
