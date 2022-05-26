/*
  On the CodeChef Practice page, problems with difficulty ≤1600 now have Doubt Support — 
  you can go to the problem page and get your queries answered by an experienced CodeChef Doubt Solver through the "Doubt Support" tab.
  
  Given the difficulty of a problem, output whether this problem has Doubt Support or not.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int D;
	cin>>D;
	(D<=1600)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	return 0;
}
