/*
  You are given the sequence of Nucleotides of one strand of DNA through a string S of length N. S contains the character A,T,C, and G only.
  Chef knows that:
          A is complementary to T.
          T is complementary to A.
          C is complementary to G.
          G is complementary to C.
  Using the string S, determine the sequence of the complementary strand of the DNA.
*/
#include <iostream>
#include <map>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<char,char> m;
    m['A']='T';
    m['T']='A';
    m['C']='G';
    m['G']='C';
	int T,N;
	string S;
	cin>>T;
	while(T--)
	{
	    cin>>N>>S;
	    for(int i=0;i<N;i++)
	    {
	        cout<<m[S[i]];
	    }
	    cout<<endl;
	}
	return 0;
}
