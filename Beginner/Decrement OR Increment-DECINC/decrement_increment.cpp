//program to obtain a number N and increment its value by 1 if the number is divisible by 4 otherwise decrement its value by 1.
#include <iostream>
using namespace std;

int main() 
{
	int num;
	cin>>num;
	if(num%4==0)
	{
	    cout<<num+1;
	}
	else
	{
	    cout<<num-1;
	}
	return 0;
}
