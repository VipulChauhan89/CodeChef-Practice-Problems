/*
  program to print the sum of the digits for n number of cases
*/
#include <iostream>
using namespace std;

int main() 
{
    int T,num,rem,sum;
    cin>>T;
    while(T--)
    {
        sum=0;
        cin>>num;
        while(num!=0)
        {
            rem=num%10;
            sum+=rem;
            num/=10;
        }
        cout<<sum<<endl;
        
    }
	return 0;
}
