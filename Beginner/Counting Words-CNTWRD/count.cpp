/*
  Harsh was recently gifted a book consisting of N pages. Each page contains exactly M words printed on it. 
  As he was bored, he decided to count the number of words in the book.
  Help Harsh find the total number of words in the book.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	unsigned int N,M;
	cin>>T;
	while(T--)
	{
	    cin>>N>>M;
	    cout<<N*M<<endl;
	}
	return 0;
}
