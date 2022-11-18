/*
    Ashu and Arvind participated in a coding contest, as a result of which they received N chocolates. Now they want to divide the chocolates between them equally.
    Can you help them by deciding if it is possible for them to divide all the N chocolates in such a way that they each get an equal number of chocolates?
    You cannot break a chocolate in two or more pieces.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    (N%2==0)?cout<<"Yes"<<endl:cout<<"No"<<endl;
	}
	return 0;
}