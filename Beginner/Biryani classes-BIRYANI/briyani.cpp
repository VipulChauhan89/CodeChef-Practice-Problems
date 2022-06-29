/*
  According to a recent survey, Biryani is the most ordered food. Chef wants to learn how to make world-class Biryani from a MasterChef. 
  Chef will be required to attend the MasterChef's classes for X weeks, and the cost of classes per week is Y coins. 
  What is the total amount of money that Chef will have to pay?
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
	    cout<<X*Y<<endl;
	}
	return 0;
}
