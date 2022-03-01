/*
  Program to help Chef in calculating what money he should get back after paying 100 rupees for those items?
  And for each test case output the money in single line the chef will receive back
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,X;
	cin>>T;
	while(T--)
	{
	    cin>>X;
	    cout<<100-X<<endl; 
	}
	return 0;
}
