/*
  Chef's computer has N GB of free space. He wants to save X files, each of size 1 GB and Y files, each of size 2 GB on his computer.Will he be able to do so?
  Chef can save all the files on his computer only if the total size of the files is less than or equal to the space available on his computer.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>N>>X>>Y;
	    ((X+(2*Y))<=N)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
