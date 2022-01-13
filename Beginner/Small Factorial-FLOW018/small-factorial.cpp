#include <iostream>
using namespace std;

int main() 
{
	int T,n,i;
	long long int m;
	cin>>T;
	while(T--){
	    cin>>n;
	    m=1;
	    for(i=1;i<=n;i++){
	        m=m*i;
	    }
	    cout<<m<<endl;
	}
	return 0;
}
