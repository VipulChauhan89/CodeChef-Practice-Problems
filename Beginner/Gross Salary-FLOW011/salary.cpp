/*
  Program in a company an emplopyee is paid as under: If his basic salary is less than Rs. 1500, then HRA = 10% of base salary and DA = 90% of basic salary. 
  If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary. If the Employee's salary is input, write a program to find his gross salary. 
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	int T;
	double salary;
	cin>>T;
	while(T--)
	{
	    cin>>salary;
	    if(salary<1500)
	    {
	        salary+=(salary*0.1)+(salary*0.9);
	    }
	    else
	    {
	        salary+=500+(salary*0.98);
	    }
	    cout<<setprecision(2)<<fixed<<salary<<endl;
	}
	return 0;
}
