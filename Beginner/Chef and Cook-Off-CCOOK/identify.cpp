/*
  A contestant that solved exactly 0 problems is a beginner.
  A contestant that solved exactly 1 problem is a junior developer.
  A contestant that solved exactly 2 problems is a middle developer.
  A contestant that solved exactly 3 problems is a senior developer.
  A contestant that solved exactly 4 problems is a hacker.
  A contestant that solved all five problems is Jeff Dean.
*/
#include <iostream>
using namespace std;

int main() 
{
    int N,i,count;
    cin>>N;
    while(N--)
    {
        count=0;
        int arr[5];
        for(i=0;i<5;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
            {
                count++;
            }
        }
        switch(count)
        {
            case 0:
                cout<<"Beginner"<<endl;
                break;
            case 1:
                cout<<"Junior Developer"<<endl;
                break;
            case 2:
                cout<<"Middle Developer"<<endl;
                break;
            case 3:
                cout<<"Senior Developer"<<endl;
                break;
            case 4:
                cout<<"Hacker"<<endl;
                break;
            case 5:
                cout<<"Jeff Dean"<<endl;
                break;
        }
    }
	return 0;
}
