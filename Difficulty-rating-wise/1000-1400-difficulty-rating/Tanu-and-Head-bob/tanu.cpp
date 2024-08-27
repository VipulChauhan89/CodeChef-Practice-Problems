#include <iostream>
#include <unordered_map>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,N;
	char c;
	cin>>T;
	while(T--)
	{
	    unordered_map<char,int> m;
	    cin>>N;
	    for(int i=0;i<N;i++)
	    {
	        cin>>c;
	        m[c]++;
	    }
	    cout<<((m['I']!=0)?"INDIAN":((m['Y']!=0)?"NOT INDIAN":"NOT SURE"))<<endl;
	}
	return 0;
}