/*
  Chef has planned that he will drink exactly X liters of tea daily. He has an empty jar having a capacity of Y liters.
  Chef can visit the tea shop to refill the jar. In each refill, the jar is completely filled to the brim and Chef is charged Z rupees.
  Chef wonders what is the minimum amount of money he has to pay for drinking exactly X liters of tea daily.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,Y,Z;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y>>Z;
	    if(X%Y!=0)
	    {
	        cout<<((X/Y)+1)*Z<<endl;
	    }
	    else
	    {
	        cout<<(X/Y)*Z<<endl;
	    }
	}
	return 0;
}
