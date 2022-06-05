/*
  Mario transforms each time he eats a mushroom as follows:
        If he is currently small, he turns normal.
        If he is currently normal, he turns huge.
        If he is currently huge, he turns small.
  Given that Mario was initially normal, find his size after eating X mushrooms.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,X,num;
	cin>>T;
	while(T--)
	{
	    cin>>X;
	    num=1+X;
	    if(num%3==0)
	    {
	        cout<<"SMALL"<<endl;
	    }
	    else if(num%3==1)
	    {
	        cout<<"NORMAL"<<endl;
	    }
	    else
	    {
	        cout<<"HUGE"<<endl;
	    }
	}
	return 0;
}
