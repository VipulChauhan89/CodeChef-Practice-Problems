#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    if(N>0 && N<=10)
	    {
	        cout<<"Lower Double"<<endl;
	    }
	    else if(N>10 && N<=15)
	    {
	        cout<<"Lower Single"<<endl;
	    }
	    else if(N>15 && N<=25)
	    {
	        cout<<"Upper Double"<<endl;
	    }
	    else
	    {
	        cout<<"Upper Single"<<endl;
	    }
	}
	return 0;
}
