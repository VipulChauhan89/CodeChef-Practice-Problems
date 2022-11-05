/*
    There are 10 problems in a contest. You know that the score of each problem is either 1 or 100 points.
    Chef came to know the total score of a participant and he is wondering how many problems were actually solved by that participant.
    Given the total score P of the participant, determine the number of problems solved by the participant. Print −1 in case the score is invalid.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,P;
	cin>>T;
	while(T--)
	{
	    cin>>P;
	    (P/100+P%100<=10)?cout<<P/100+P%100<<endl:cout<<-1<<endl;
	    
	}
	return 0;
}