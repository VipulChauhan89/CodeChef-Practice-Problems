/*
  Karan likes the number 4 very much.
  Impressed by the power of this number, Karan has begun to look for occurrences of four anywhere. 
  He has a list of T integers, for each of them he wants to calculate the number of occurrences of the digit 4 in the decimal representation. 
  He is too busy now, so program to help him.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,num,count;
	cin>>T;
	while(T--)
	{
	    count=0;
	    cin>>num;
	    while(num!=0)
	    {
	        if(num%10==4)
	        {
	            count++;
	        }
	        num/=10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
