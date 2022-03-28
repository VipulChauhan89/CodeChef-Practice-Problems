/*
  The Chef has reached the finals of the Annual Inter-school Declamation contest. For the finals, students were asked to prepare 10 topics. 
  However, Chef was only able to prepare three topics, numbered A, B and C— he is totally blank about the other topics. 
  This means Chef can only win the contest if he gets the topics A, B or C to speak about. On the contest day, Chef gets topic X. 
  
  Program to determine whether Chef has any chances of winning the competition.
*/
#include <iostream>
using namespace std;

int main() 
{
	int A,B,C,X;
	cin>>A>>B>>C>>X;
	if(X==A || X==B || X==C)
	{
	    cout<<"Yes"<<endl;
	}
	else
	{
	    cout<<"No"<<endl;
	}
	return 0;
}
