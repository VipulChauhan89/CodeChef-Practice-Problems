#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<string> size={"SMALL","NORMAL","HUGE"};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X;
	cin>>T;
	while(T--)
	{
	    cin>>X;
	    cout<<size[(X+1)%3]<<endl;
	}
	return 0;
}