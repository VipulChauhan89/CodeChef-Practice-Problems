/*  
  Utkarsh is currently sitting for placements. He has applied to three companies named A,B, and C.
  You know Utkarsh's order of preference among these 3 companies, given to you as characters first, second, and third respectively (where first is the company he prefers most).
  You also know that Utkarsh has received offers from exactly two of these three companies, given you as characters x and y.

  Utkarsh will always accept the offer from whichever company is highest on his preference list. Which company will he join?
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	char first,second,third,x,y;
	cin>>T;
	while(T--)
	{
	    cin>>first>>second>>third>>x>>y;
	    if(x==first || y==first)
	    {
	        cout<<first<<endl;
	    }
	    else if(x==second || y==second)
	    {
	        cout<<second<<endl;
	    }
	    else
	    {
	        cout<<third<<endl;
	    }
	}
	return 0;
}
