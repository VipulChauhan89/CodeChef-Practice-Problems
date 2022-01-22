/*
    Program to purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000. 
    If the quantity and price per item are input, write a program to calculate the total expenses.
*/
#include <iostream>
#include<iomanip>
using namespace std;

int main() 
{
	int T,quantity;
	double price;
	cin>>T;
	while(T--)
	{
	    cin>>quantity>>price;
	    price*=quantity;
	    if(quantity>1000)
	    {
	        price=price-(price*0.1);
	    }
	    cout<<setprecision(6)<<fixed<<price<<endl;
	}
	return 0;
}
