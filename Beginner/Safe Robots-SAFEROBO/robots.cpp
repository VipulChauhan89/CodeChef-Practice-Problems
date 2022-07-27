/*
  There are two robots, one belonging to Alice, and the other to Bob. These robots are currently standing in a lane. 
  You are given this information by a string s, whose characters are either '.' denoting empty cell, 'A' denoting Alice's robot, or 'B' denoting Bob's robot.
  We guarantee that Alice's robot lies to the left of Bob's robot.
  You are given two integers sa, and sb. Alice's robot moves to the right, and in a single step it jumps sa cells to the right. 
  Whereas Bob's robot moves to the left, and in a single step it jumps sb cells to the left. Both robots take 1 step per second. 
  If initially, Alice's robot was at index 5, and sa=4, then after 1 second, Alice's robot would be at index 9.Note that it does not go to cells in between. 
  It directly jumps to cell 9. Also note that the robots don't step out of the given cells, i.e., they stop moving if the next step they take is out of the cells. 
  And once some robot stops moving, the entire simulation stops, and the other robot also stops moving.
  Find whether at any point of time, the robots will land on the same cell or not. 
  If they fall into the same cell, they will collide with each other, and it will create an unsafe undesired situation.
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,sa,sb;
	string s;
	cin>>T;
	while(T--)
	{
	    unordered_map<char,int> m;
	    cin>>s>>sa>>sb;
	    for(int i=0;i<s.length();i++)
	    {
	        m[s[i]]=i;
	    }
	    ((m['B']-m['A'])%(sa+sb)==0)?cout<<"unsafe"<<endl:cout<<"safe"<<endl;
	}
	return 0;
}
