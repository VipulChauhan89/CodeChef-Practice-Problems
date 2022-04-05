/*
  Once again, we have a lot of requests from coders for a challenging problem on geometry. 
  Geometry expert Nitin is thinking about a problem with parabolas, icosahedrons, crescents and trapezoids, but for now, 
  to encourage beginners, he chooses to work with circles and rectangles.
  You are given two sequences A1,A2,…,AN and B1,B2,…,BN. You should choose a permutation P1,P2,…,PN of the integers 1 through N and construct N
  rectangles with dimensions A1×BP1,A2×BP2,…,AN×BPN. Then, for each of these rectangles, you should construct an inscribed circle, 
  i.e. a circle with the maximum possible area that is completely contained in that rectangle. Let S be the sum of diameters of these N circles. 
  
  Program to find the maximum value of S.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T,N;
	long long int sum;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    int A[N],B[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    for(int i=0;i<N;i++)
	    {
	        cin>>B[i];
	    }
	    sort(A,A+N);
	    sort(B,B+N);
	    sum=0;
	    for(int i=0; i<N; i++)
	    {
	        sum+=min(A[i], B[i]);
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
