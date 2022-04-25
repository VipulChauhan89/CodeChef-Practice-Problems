/*
  Six friends go on a trip and are looking for accommodation. After looking for hours, 
  they find a hotel which offers two types of rooms — double rooms and triple rooms. A double room costs Rs. X, while a triple room costs Rs. Y.
  The friends can either get three double rooms or get two triple rooms. Find the minimum amount they will have to pay to accommodate all six of them.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y;
	    cout<<min(X*3,Y*2)<<endl;
	}
	return 0;
}
