/*
	In a recent breakthrough in mathematics, the proof utilized a concept called Height. Consider a fraction a/b. 
	Its Height is defined as the maximum of its numerator and denominator. So, for example, the Height of 3/19 would be 19, and the Height of 27/4 would be 27.
	Given a and b, find the Height of a/b.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int a,b;
	cin>>a>>b;
	cout<<max(a,b)<<endl;
	return 0;
}