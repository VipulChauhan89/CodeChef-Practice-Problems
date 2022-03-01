/*
  You know that 1 kg of pulp can be used to make 1000 pages and 1 notebook consists of 100 pages.
  Program to find the number of notebooks that can be made using N kgs of pulp.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    cout<<N*10<<endl;
	}
	return 0;
}
