#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int X;
    double Y;
	cin>>X>>Y;
	Y-=((X%5==0 && (double)X+0.5<=(Y))?(double)(0.5+X):0);
	cout<<fixed<<setprecision(2)<<Y<<endl;
	return 0;
}