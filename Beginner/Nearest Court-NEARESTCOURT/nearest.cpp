/*
  Chef and Chefina are at positions X and Y on a number line. They both love badminton. It is known that badminton courts are located at every integer point.
  They want to find a court such that the maximum distance travelled by either of them is minimized.Formally, suppose they choose the badminton court at position Z. 
  You need to find the minimum value of max(|X−Z|,|Y−Z|) across all possible choices of Z. Here, |X| denotes absolute value of X. Report this minimum value.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,Y;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y;
	    int Z=(X+Y)/2;
	    cout<<max(abs(X-Z),abs(Y-Z))<<endl;
	}
	return 0;
}
