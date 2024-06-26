#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int A,B,C,X;
	cin>>A>>B>>C>>X;
	cout<<((X==A || X==B || X==C)?"Yes":"No")<<endl;
	return 0;
}