/*
  Chef is a beginner and should ideally try and solve only problems with difficulty rating strictly less than 1000. 
  Given a list of difficulty ratings for problems in the Chef’s to-do list, 
  please help him identify how many of those problems Chef should remove from his to-do list, 
  so that he is only left with problems of difficulty rating less than 1000.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N;
	cin>>T;
	while(T--)
	{
	    int count=0;
	    cin>>N;
	    int D[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>D[i];
	        if(D[i]>=1000)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
