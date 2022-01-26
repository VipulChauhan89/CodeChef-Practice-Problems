/*
  program to obtain a number (N)from the user and display whether the number is a one digit number, 2 digit number, 3 digit number or more than 3 digit number
  
  Print "1" if N is a 1 digit number.
  Print "2" if N is a 2 digit number.
  Print "3" if N is a 3 digit number.
  Print "More than 3 digits" if N has more than 3 digits.
*/
#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin>>N;
    if(N>=0 && N<10)
    {
        cout<<1<<endl;
    }
    else if(N>=10 && N<100)
    {
        cout<<2<<endl;
    }
    else if(N>=100 && N<1000)
    {
        cout<<3<<endl;
    }
    else
    {
        cout<<"More than 3 digits"<<endl;
    }
	return 0;
}
