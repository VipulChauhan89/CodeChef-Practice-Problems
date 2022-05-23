/*
  In mathematics, the degree of polynomials in one variable is the highest power of the variable in the algebraic expression with non-zero coefficient.
  Chef has a polynomial in one variable x with N terms. The polynomial looks like A0⋅x0+A1⋅x1+…+AN−2⋅xN−2+AN−1⋅xN−1 
  where Ai−1 denotes the coefficient of the ith term xi−1 for all (1≤i≤N).

  Find the degree of the polynomial.
*/
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N,m;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    stack<int> A;
	    for(int i=0;i<N;i++)
	    {
	        cin>>m;
	        A.push(m);
	    }
	    for(int i=0;i<N;i++)
	    {
	        if(A.top()!=0)
	        {
	            break;
	        }
	        else
	        {
	            A.pop();
	        }
	    }
	    cout<<A.size()-1<<endl;
	}
	return 0;
}
