/*
  Chef is interested in the history of SnackDown contests. He needs a program to verify if SnackDown was hosted in a given year.

  SnackDown was hosted by CodeChef in the following years: 2010, 2015, 2016, 2017 and 2019.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,Year;
	cin>>T;
	while(T--)
	{
	    cin>>Year;
	    if(Year==2010 || Year==2015 || Year==2016 || Year==2017 || Year==2019)
	    {
	        cout<<"HOSTED"<<endl;
	    }
	    else
	    {
	        cout<<"NOT HOSTED"<<endl;
	    }
	}
	return 0;
}
