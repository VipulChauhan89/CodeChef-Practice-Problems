/*
  Farmer Feb has three fields with potatoes planted in them. He harvested x potatoes from the first field, y potatoes from the second field and is yet to harvest potatoes from the third field. 
  Feb is very superstitious and believes that if the sum of potatoes he harvests from the three fields is a prime number 
  Program to help him by calculating for him the minimum number of potatoes that if harvested from the third field will make the sum of potatoes prime. 
  At least one potato should be harvested from the third field.
*/
#include <iostream>
#include<cmath>
using namespace std;
bool isPrime(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}
int main() 
{
	int T,a,b,c,sum=0;
	cin>>T;
	while(T--)
	{
	    c=0;
	    cin>>a>>b;
	    sum=a+b;
	    while(1)
	    {
	        c++;
	        sum++;
	        if(isPrime(sum))
	        {
	            break;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
