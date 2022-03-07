/*
  You are given the height H (in metres) and mass M (in kilograms) of Chef. 
  The Body Mass Index (BMI) of a person is computed as M/H*H.

  Report the category into which Chef falls, based on his BMI:

  Category 1: Underweight if BMI ≤18
  Category 2: Normal weight if BMI ∈{19,20,…,24}
  Category 3: Overweight if BMI ∈{25,26,…, 29}
  Category 4: Obesity if BMI ≥30
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,M,H;
	cin>>T;
	float BMI;
	while(T--)
	{
	    cin>>M>>H;
	    BMI=M/((float)H*H);
	    if(BMI<=18)
	    {
	        cout<<1<<endl;
	    }
	    else if(BMI>18 && BMI <=24)
	    {
	        cout<<2<<endl;
	    }
	    else if(BMI>24 && BMI<=29)
	    {
	        cout<<3<<endl;
	    }
	    else
	    {
	        cout<<4<<endl;
	    }
	}
	return 0;
}
