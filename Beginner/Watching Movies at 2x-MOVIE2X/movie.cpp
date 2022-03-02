/*
  Chef has decided to watch the first Y minutes of the movie at twice the usual speed 
  as he was warned by his friends that the movie gets interesting only after the first Y minutes.
  Program to find out how long will Chef spend watching the movie in total?
*/
#include <iostream>
using namespace std;

int main() 
{
	int X,Y;
	cin>>X>>Y;
	cout<<X-(Y/2)<<endl;
	return 0;
}
