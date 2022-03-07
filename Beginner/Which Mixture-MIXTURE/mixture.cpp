/*
  Chef has A units of solid and B units of liquid. 
  He combines them to create a mixture. 
  What kind of mixture does Chef produce: a solution, a solid, or a liquid?

  A mixture is called :
  1) A solution if A>0and B>0
  2) A solid if B=0
  3) A liquid if A=0
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,A,B;
	cin>>T;
	while(T--)
	{
	    cin>>A>>B;
	    if(A>0 && B>0)
	    {
	        cout<<"Solution"<<endl;
	    }
	    else if(B==0)
	    {
	        cout<<"Solid"<<endl;
	    }
	    else
	    {
	        cout<<"Liquid"<<endl;
	    }
	}
	return 0;
}
