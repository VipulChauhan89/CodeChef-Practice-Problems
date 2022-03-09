/*
  Vasya likes the number 239. Therefore, he considers a number pretty if its last digit is 2, 3 or 9.

  Vasya wants to watch the numbers between L and R (both inclusive).
  Program to determine how many pretty numbers are in this range.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,L,R,J,count;
	cin>>T;
	while(T--)
	{
	    count=0;
	    cin>>L>>R;
	    while(L<=R)
	    {
	        J=L%10;
	        if(J==2 || J==3 || J==9)
	        {
	            count++;
	        }
	        L++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
