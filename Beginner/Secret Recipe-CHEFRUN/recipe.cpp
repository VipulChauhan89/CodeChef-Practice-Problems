/*
  Chef and his competitor Kefa own two restaurants located at a straight road. The position of Chef's restaurant is X1, the position of Kefa's restaurant is X2.

  Chef and Kefa found out at the same time that a bottle with a secret recipe is located on the road between their restaurants. The position of the bottle is X3.

  The cooks immediately started to run to the bottle. Chef runs with speed V1, Kefa with speed V2.

  Program to figure out who reaches the bottle first and gets the secret recipe (of course, it is possible that both cooks reach the bottle at the same). 
*/
#include <iostream>
using namespace std;

int main() 
{
	int T;
	double X1,X2,X3,V1,V2;
	cin>>T;
	while(T--)
	{
	    cin>>X1>>X2>>X3>>V1>>V2;
	    if((X3-X1)/V1>(X2-X3)/V2)
	    {
	        cout<<"Kefa"<<endl;
	    }
	    else if((X3-X1)/V1<(X2-X3)/V2)
	    {
	        cout<<"Chef"<<endl;
	    }
	    else
	    {
	        cout<<"Draw"<<endl;
	    }
	}
	return 0;
}
