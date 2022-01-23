/*
  A certain type of steel is graded according to the following conditions.

  Hardness of the steel must be greater than 50
  Carbon content of the steel must be less than 0.7
  Tensile strength must be greater than 5600
  The grades awarded are as follows:

  Grade is 10 if all three conditions are met
  Grade is 9 if conditions (1) and (2) are met
  Grade is 8 if conditions (2) and (3) are met
  Grade is 7 if conditions (1) and (3) are met
  Grade is 6 if only one condition is met
  Grade is 5 if none of the three conditions are met
  
  Write a program to display the grade of the steel, based on the values of hardness, carbon content and tensile strength of the steel, given by the user.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,hard,tensile;
	float carbon;
	cin>>T;
	while(T--)
	{
	    cin>>hard>>carbon>>tensile;
	    if(hard>50 && carbon<0.7 && tensile>5600)
	    {
	        cout<<10<<endl;
	    }
	    else if(hard>50 && carbon<0.7)
	    {
	        cout<<9<<endl;
	    }
	    else if(carbon<0.7 && tensile>5600)
	    {
	        cout<<8<<endl;
	    }
	    else if(hard>50 && tensile>5600)
	    {
	        cout<<7<<endl;
	    }
	    else if(hard>50 || carbon<0.7 || tensile>5600)
	    {
	        cout<<6<<endl;
	    }
	    else
	    {
	        cout<<5<<endl;
	    }
	}
	return 0;
}
