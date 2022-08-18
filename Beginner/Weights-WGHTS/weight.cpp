/*
	Chef is playing with weights. He has an object weighing W units. He also has three weights each of X,Y, and Z units respectively. 
	Help him determine whether he can measure the exact weight of the object with one or more of these weights.
	If it is possible to measure the weight of object with one or more of these weights, print YES, otherwise print NO.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,W,X,Y,Z;
	cin>>T;
	while(T--)
	{
	    cin>>W>>X>>Y>>Z;
	    (W==X||W==Y||W==Z||W==X+Y||W==Y+Z||W==X+Z||W==X+Y+Z)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}