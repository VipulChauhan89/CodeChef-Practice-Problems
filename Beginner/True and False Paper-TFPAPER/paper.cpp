/*
  Alice wrote an exam containing N true or false questions (i.e. questions whose answer is either true or false). 
  Each question is worth 1 mark and there is no negative marking in the examination. Alice scored K marks out of N.
  Bob wrote the same exam but he marked each and every question as the opposite of what Alice did, i.e, for whichever questions Alice marked true, 
  Bob marked false and for whichever questions Alice marked false, Bob marked true. Determine the score of Bob.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,K;
	cin>>T;
	while(T--)
	{
	    cin>>N>>K;
	    cout<<N-K<<endl;
	}
	return 0;
}
