/*
  Chef recorded a video explaining his favorite recipe. However, the size of the video is too large to upload on the internet. 
  He wants to compress the video so that it has the minimum size possible.
  Chef's video has N frames initially. The value of the ith frame is Ai. Chef can do the following type of operation any number of times:
        Choose an index i (1≤i≤N) such that the value of the ith frame is equal to the value of either of its neighbors and remove the ith frame.
  Find the minimum number of frames Chef can achieve.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    vector<int> A(N);
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    A.erase(unique(A.begin(),A.end()),A.end());
	    cout<<A.size()<<endl;
	}
	return 0;
}
