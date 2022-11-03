/*
    Chef is buying sweet things to prepare for Halloween! The shop sells both chocolate and candy. 
            Each bar of chocolate has a tastiness of X.
            Each piece of candy has a tastiness of Y.
    One packet of chocolate contains 2 bars, while one packet of candy contains 5 pieces.
    Chef can only buy one packet of something sweet, and so has to make a decision: which one should he buy in order to maximize the total tastiness of his purchase?
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y;
	    X*=2;
	    Y*=5;
	    if(X==Y)
	    {
	        cout<<"Either"<<endl;
	    }
	    else if(X>Y)
	    {
	        cout<<"Chocolate"<<endl;
	    }
	    else
	    {
	        cout<<"Candy"<<endl;
	    }
	}
	return 0;
}