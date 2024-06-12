#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int N,M,X,Y;
	cin>>N>>M>>X>>Y;
	cout<<(N*X)+(M*Y)<<endl;
	return 0;
}