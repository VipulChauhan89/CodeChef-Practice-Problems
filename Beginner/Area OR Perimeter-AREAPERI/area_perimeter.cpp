/*
  Program to take input the length and breadth of the rectangle
  In the first line print "Area" if area is greater otherwise print "Peri" and if they are equal print "Eq".(Without quotes).

  In the second line print the calculated area or perimeter (whichever is greater or anyone if it is equal).
*/
#include <iostream>
using namespace std;

int main() 
{
	int L,B;
	cin>>L>>B;
	long int Area,Peri;
	Area=L*B;
	Peri=2*(L+B);
	if(Area>Peri)
	{
	    cout<<"Area"<<endl;
	    cout<<Area<<endl;
	}
	else if(Peri>Area)
	{
	    cout<<"Peri"<<endl;
	    cout<<Peri<<endl;
	}
	else
	{
	    cout<<"Eq"<<endl;
	    cout<<Area<<endl;
	}
	return 0;
}
