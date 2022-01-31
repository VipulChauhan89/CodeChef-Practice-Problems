/*
  For each test case, print a single line containing one integer — the number of matches needed to write the result (A+B).
*/
#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int T,num1,num2,sum1,sum2,rem;
	vector<int> a={6,2,5,5,4,5,6,3,7,6};
	cin>>T;
	while(T--)
	{
	    cin>>num1>>num2;
	    sum1=num1+num2;
	    sum2=0;
	    while(sum1!=0)
	    {
	        rem=sum1%10;
	        sum2+=a[rem];
	        sum1/=10;
	    }
	    cout<<sum2<<endl;
	}
	return 0;
}
