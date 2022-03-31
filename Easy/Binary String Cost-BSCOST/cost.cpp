/*
  According to the new tax scheme, a new tax called the binary string tax was introduced! JJ has a binary string S of length N. 
  According to the tax scheme, for every occurrence of 01 in S, a tax of X rupees will be charged, while for every occurrence of 10 in S, a tax of Y rupees will be charged.
  JJ can rearrange the string S in any way he wants. He wants to minimize the amount of tax he has to pay. 
  
  Program to help him do so?
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int T,N,X,Y,x,y,x1,y1;
	string str;
	cin>>T;
	while(T--)
	{
	    x=0;
        y=0;
        x1=0;
        y1=0;
        cin>>N>>X>>Y;
        cin>>str;
        string s=str;
        sort(s.begin(),s.end());
        string s1=s;
        reverse(s1.begin(),s1.end());
        for(int i=0;i<N-1;i++)
        {
            if(s[i]=='0')
            {
                if(s[i+1]=='1')
                {
                    x++;
                }
            }
            if(s[i]=='1')
            {
                if(s[i+1]=='0')
                {
                    y++;
                }
            }
            if((s1[i]=='0')&&(s1[i+1]=='1'))
            {
                x1++;
            }
            if((s1[i]=='1')&&(s1[i+1]=='0'))
            {
                y1++;
            }
        }
        cout<<min((x*X)+(y*Y),(x1*X)+(y1*Y))<<endl;
	}
	return 0;
}
