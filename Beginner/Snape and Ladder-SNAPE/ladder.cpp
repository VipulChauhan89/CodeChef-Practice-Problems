/*
  Professor Snape has lots of potions. Bottles containing all types of potions are stacked on shelves which cover the entire wall from floor to ceiling. 
  Professor Snape has broken his bones several times while climbing the top shelf for retrieving a potion. 
  He decided to get a ladder for him. But he has no time to visit Diagon Alley. So he instructed Ron Weasley to make a ladder for him. 
  Professor Snape specifically wants a step ladder which looks like an inverted 'V' from side view.
  
  What should be the length of RS? At one extreme LS can be vertical and at other RS can be vertical. Ron is angry and confused. 
  Since Harry is busy battling Voldemort, 
  
  Program to help Ron find the minimum and maximum length of RS.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int T;
	double B,LS,RS;
	cin>>T;
	while(T--)
	{
	    cin>>B>>LS;
	    cout<<sqrt(pow(LS,2)-pow(B,2))<<" "<<sqrt(pow(LS,2)+pow(B,2))<<endl;
	}
	return 0;
}
