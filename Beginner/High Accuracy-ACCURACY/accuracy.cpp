/*
  There are 100 questions in a paper. Each question carries +3 marks for correct answer, -1 marks for incorrect answer and 0 marks for unattempted question.
  It is given that Chef received exactly X (0≤X≤100) marks. Determine the minimum number of problems Chef marked incorrect.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X;
	cin>>T;
	while(T--)
	{
	    cin>>X;
	    if(X%3!=0)
	    {
	        cout<<3-X%3<<endl;
	    }
	    else
	    {
	        cout<<0<<endl;
	    }
	}
	return 0;
}
