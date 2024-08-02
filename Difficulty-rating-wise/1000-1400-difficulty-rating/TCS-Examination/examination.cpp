#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,A1,A2,A3,B1,B2,B3;
	cin>>T;
	while(T--)
	{
	    cin>>A1>>A2>>A3>>B1>>B2>>B3;
	    int s1=A1+A2+A3,s2=B1+B2+B3;
	    if(s1==s2)
        {
            if(A1==B1 && A2==B2 && A3==B3)
            {
                cout<<"TIE"<<endl;
            }
            else if(A1>B1 || (A1==B1 && A2>B2) || (A1==B1 && A2==B2 && A3>B3))
            {
                cout<<"DRAGON"<<endl;
            }
            else
            {
                cout<<"SLOTH"<<endl;
            }
        }
        else if(s1>s2)
        {
            cout<<"DRAGON"<<endl;
        }
        else
        {
            cout<<"SLOTH"<<endl;
        }
	}
	return 0;
}