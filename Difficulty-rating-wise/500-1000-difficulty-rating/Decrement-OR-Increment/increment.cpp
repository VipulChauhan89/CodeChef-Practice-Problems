#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int N;
	cin>>N;
	cout<<((N%4==0)?N+1:N-1)<<endl;
	return 0;
}