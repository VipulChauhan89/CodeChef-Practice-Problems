/*
  Kepler’s Law states that the planets move around the sun in elliptical orbits with the sun at one focus. 
  Kepler's 3rd law is The Law of Periods, according to which:
  The square of the time period of the planet is directly proportional to the cube of the semimajor axis of its orbit.
  You are given the Time periods (T1,T2) and Semimajor Axes (R1,R2) of two planets orbiting the same star.

  Program to determine if the Law of Periods is satisfied or not, i.e, if the constant of proportionality of both planets is the same.
  Print "Yes" (without quotes) if the law is satisfied, else print "No".
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int T;
	double T1,T2,R1,R2;
	cin>>T;
	while(T--)
	{
	    cin>>T1>>T2>>R1>>R2;
	    (pow(T1,2)/pow(R1,3)==pow(T2,2)/pow(R2,3))?cout<<"Yes"<<endl:cout<<"No"<<endl;
	}
	return 0;
}
