/*
program to take two input for n cases and on each line of input produce one line of output. 
This line contains any one of the relational operators
'<' , '>' , '='.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,n1,n2;
	cin>>T;
	while(T--)
	{
	    cin>>n1>>n2;
	    if(n1<n2)
	    {
	        cout<<"<"<<endl;
	    }
	    else if(n1>n2)
	    {
	        cout<<">"<<endl;
	    }
	    else
	    {
	        cout<<"="<<endl;
	    }
	}
	return 0;
}
