/*
  After mastering the art of Coding , Chef has decided to master Physics(P) , Chemistry(C) and Maths(M). 
  Luckily he has three sisters where each sister is known to be master of exactly one subject. 
  Now you are given a string of size 3 where character at index 1 denotes the subject known to sister I, 
  character at index 2 denotes the subject known to sister II and character at index 3 denotes the subject known to sister III. 
  You have to answer with either "YES" if chef can master "PCM" from his sisters or "NO" if he cannot.
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	char c;
	cin>>T;
	while(T--)
	{
	    unordered_map<char,int> m;
	    for(int i=0;i<3;i++)
	    {
	        cin>>c;
	        m[c]++;
	    }
	    (m['P']==1 && m['C']==1 && m['M']==1)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
