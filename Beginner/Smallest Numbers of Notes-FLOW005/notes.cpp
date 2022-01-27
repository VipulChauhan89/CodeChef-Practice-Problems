/*
  program to computer smallest number of notes that will combine to give Rs. N.
  Consider a currency system in which there are notes of six denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
  If the sum of Rs. N is input.
*/
#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int T,sum;
	long int num;
	vector <int> a={100,50,10,5,2,1};
	cin>>T;
	while(T--)
	{
	    sum=0;
	    cin>>num;
	    for(int i=0;i<6;i++)
	    {
	        sum+=num/a[i];
	        num-=(num/a[i])*a[i];
	        
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
