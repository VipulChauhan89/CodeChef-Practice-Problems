/*
  On the ice planet Hoth, Chef has run into his arch-nemesis, DarthForces. Darth has a peculiar fighting style ― he does not attack, but simply defends and lets his opponent tire himself out.
  Chef has a lightsaber which has an attack power denoted by P. He keeps hitting Darth with the lightsaber. Every time he hits, 
  Darth's health decreases by the current attack power of the lightsaber (by P points), and afterwards, P decreases to ⌊P2⌋.

  If the attack power becomes 0 before Darth's health becomes 0 or less, Chef dies. Otherwise, Darth dies. 
  You are given Darth's initial health H and the initial attack power P. Tell Chef if he can beat Darth or if he should escape.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,H,P;
	cin>>T;
	while(T--)
	{
	    cin>>H>>P;
	    while(P>0)
	    {
	        H-=P;
	        P/=2;
	    }
	    (H<=0)?cout<<1<<endl:cout<<0<<endl;
	}
	return 0;
}
