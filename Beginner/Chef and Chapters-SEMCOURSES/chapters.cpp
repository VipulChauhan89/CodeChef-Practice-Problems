/*
  This semester, Chef took X courses. Each course has Y units and each unit has Z chapters in it.

  Find the total number of chapters Chef has to study this semester.
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,X,Y,Z;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y>>Z;
	    cout<<X*Y*Z<<endl;
	}
	return 0;
}
