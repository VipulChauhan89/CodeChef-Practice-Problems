#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int N;
	cin>>N;
	cout<<((N>=6 && N<=8)?"YES":"NO")<<endl;
	return 0;
}