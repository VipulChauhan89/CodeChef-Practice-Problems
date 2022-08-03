/*
  Write a program to take the values for A, B, C of a quadratic equation A∗X2+B∗X+C=0 and then find all the roots of the equation. 
  It is guaranteed that A ≠ 0 and that the equation has at least one real root.
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	double A,B,C;
	cin>>A>>B>>C;
	cout<<fixed<<setprecision(6)<<(-B+sqrt(B*B-4*A*C))/(2*A)<<endl;
	cout<<fixed<<setprecision(6)<<(-B-sqrt(B*B-4*A*C))/(2*A)<<endl;
	return 0;
}
