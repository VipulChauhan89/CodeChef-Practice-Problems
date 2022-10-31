/*
    In a test, there are N problems, each carrying X marks. In each problem, Chef either received X marks or 0 marks.
    Determine whether is it possible for Chef to achieve exactly Y marks.
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
	    (Y%X==0 && (Y/X)<=N)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}