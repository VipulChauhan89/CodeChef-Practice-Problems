/*
    Hackerman wants to know who is the better player between Bob and Alice with the help of a game. The game proceeds as follows:
            First, Alice throws a die and gets the number A
            Then, Bob throws a die and gets the number B
            Alice wins the game if the sum on the dice is a prime number; and Bob wins otherwise.
    Given A and B, determine who wins the game.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A,B;
	cin>>T;
	while(T--)
	{
	    string ans="Alice";
	    cin>>A>>B;
	    A+=B;
	    for(int i=2;i<=sqrt(A);i++)
	    {
	        if(A%i==0)
	        {
	            ans="Bob";
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}