#include <iostream>
#include <unordered_map>
using namespace std;

int main() 
{
    unordered_map<char,char> m;
    m['A']='T';
    m['T']='A';
    m['C']='G';
    m['G']='C';
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	char s;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>s;
	        cout<<m[s];
	    }
	    cout<<endl;
	}
	return 0;
}