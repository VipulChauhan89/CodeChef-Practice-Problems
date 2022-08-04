/*
  Chef wants to rent a car to travel to his restaurant which is N kilometers away. He can either rent a petrol car or a diesel car.
  One litre of petrol costs X rupees and one litre of diesel costs Y rupees. Chef can travel A kilometers with one litre of petrol and B kilometers with one litre of diesel.
  Which car should the chef rent in order to minimize the cost of his travel?
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	double N,x,y,a,b;
	cin>>T;
	while(T--)
	{
	    cin>>N>>x>>y>>a>>b;
	    double a1,a2;
	    a1=(N/a)*x;
	    a2=(N/b)*y;
	    if(a1<a2)
	    {
	        cout<<"PETROL"<<endl;
	    }
	    else if(a1>a2)
	    {
	        cout<<"DIESEL"<<endl;
	    }
	    else
	    {
	        cout<<"ANY"<<endl;
	    }
	}
	return 0;
}
