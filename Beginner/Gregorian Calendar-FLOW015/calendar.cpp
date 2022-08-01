//According to Gregorian Calendar, it was Monday on the date 01/01/2001. If any year is input,Write a program to display what is the day on the 1st January of this year.
#include <iostream>
#include <unordered_map>
using namespace std;

bool leap_year(int n)
{
    if((n%4==0 && n%100!=0) || n%400==0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unordered_map<int,string> m;
    m[0]="monday";
    m[1]="tuesday";
    m[2]="wednesday";
    m[3]="thursday";
    m[4]="friday";
    m[5]="saturday";
    m[6]="sunday";
	int T,year;
	cin>>T;
	while(T--)
	{
	    cin>>year;
	    int week=0;
	    for(int i=1900;i<year;i++)
	    {
	        if(leap_year(i))
	        {
	            week+=2;
	        }
	        else
	        {
	            week++;
	        }
	    }
	    cout<<m[week%7]<<endl;
	}
	return 0;
}
