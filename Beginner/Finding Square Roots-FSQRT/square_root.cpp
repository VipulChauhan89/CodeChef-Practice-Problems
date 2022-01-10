//program to print the square root rounded to nearest integer for n numbers
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int T,num;
	cin>>T;
	while(T--)
	{
	    cin>>num;
	    cout<<int(sqrt(num))<<endl;
	}
	return 0;
}
