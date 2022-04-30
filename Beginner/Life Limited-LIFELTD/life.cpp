/*
  Recently the company Life Ltd created a new logo for themselves. You are asked to test the design of the logo.
  The logo is a 3 * 3 square grid with 9 cells. Each cell contains some lower case english letter. 
  This logo will be considered good if there exist three cells in the shape of an L that contain the letter 'l' (lower case 'L') in each of them. 
  That is, there should be a cell with 'l', its cell directly beneath it should also have 'l' and the cell to the right of the second cell should also have 'l'.

  Your task is to tell whether the logo is good or not.
*/
#include <iostream>
using namespace std;
bool solve(char A[3][3],int i,int j)
{
    if(A[i][j]=='l' && A[i+1][j]=='l' && A[i+1][j+1]=='l')
    {
        return true;
    }
    return false;
}
int main() 
{
	int T;
	char A[3][3];
	cin>>T;
	while(T--)
	{
	    for(int i=0;i<3;i++)
	    {
	        for(int j=0;j<3;j++)
	        {
	            cin>>A[i][j];
	        }
	    }
	    if(solve(A,0,0) || solve(A,0,1) || solve(A,1,0) || solve(A,1,1))
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
