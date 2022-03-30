/*
  Today is the final round of La Liga, the most popular professional football league in the world. 
  Real Madrid is playing against Malaga and Barcelona is playing against Eibar. These two matches will decide who wins the league title. 
  Real Madrid is already 3 points ahead of Barcelona in the league standings. 
  In fact, Real Madrid will win the league title, except for one scenario: 
      If Real Madrid loses against Malaga, and Barcelona wins against Eibar, then the La Liga title will go to Barcelona. 
      In any other combination of results, Real Madrid will win the title.

  Program to find out who will win the league
*/
#include <iostream>
#include <map>
using namespace std;

int main() 
{
	int T,n;
	string s;
	cin>>T;
	while(T--)
	{
	    map<string,int> a;
	    for(int i=0;i<4;i++)
	    {
	        cin>>s>>n;
	        a[s]=n;
	    }
	    if(a["RealMadrid"]<a["Malaga"] && a["Barcelona"]>a["Eibar"])
	    {
	        cout<<"Barcelona"<<endl;
	    }
	    else
	    {
	        cout<<"RealMadrid"<<endl;
	    }
	}
	return 0;
}
