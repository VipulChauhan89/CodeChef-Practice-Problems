#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int R,O,C;
	cin>>R>>O>>C;
	cout<<(((((20-O)*36)+C)>R)?"YES":"NO")<<endl;
	return 0;
}