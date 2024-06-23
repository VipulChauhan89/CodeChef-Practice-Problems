#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,NA,NB,NC;
	cin>>T;
	while(T--)
	{
	    cin>>NA>>NB>>NC;
	    int sum=NA+NB+NC;
	    cout<<((sum-NA<NA || sum-NB<NB || sum-NC<NC)?"YES":"NO")<<endl;
	}
	return 0;
}