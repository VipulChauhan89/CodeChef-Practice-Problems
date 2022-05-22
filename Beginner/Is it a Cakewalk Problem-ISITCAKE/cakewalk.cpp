/*
  Estimating the difficulty of cakewalk problem is a hard task. Our Chef Hasan has prepared a problem which he thinks is a cakewalk level problem. 
  There are 100 participants in the contest. The problem indeed turned out to be easy and was solved by all the participants. 
  However, each person might have taken a different amount of time to solve the problem. The contest's duration was 1 hour (60 minutes).
  
  You are given an array times denote the time each person took to solve the problem. Hasan estimated that the problem should be solved within half an hour (<= 30 minutes). 
  So, he will consider the problem to be a cakewalk if there are at least 60 users who solved the problem within 30 minutes (including 30).

  The participants of the contest were arranged in a grid of size 10 * 10, and the input is given according to this. 
  You can see the input section to know more about how to read the time taken by each user. Tell whether the problem is indeed a cakewalk or not.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,count,num;
	cin>>T;
	while(T--)
	{
	    count=0;
	    for(int i=0;i<100;i++)
	    {
	        cin>>num;
	        count+=(num<=30)?1:0;
	    }
	    (count>=60)?cout<<"yes"<<endl:cout<<"no"<<endl;
	}
	return 0;
}
