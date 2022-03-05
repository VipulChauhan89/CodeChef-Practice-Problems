/*
  The test has a total of N question, each question carries 3 marks for a correct answer and −1 for an incorrect answer. 
  Chef is a risk-averse person so he decided to attempt all the questions. It is known that Chef got X questions correct and the rest of them incorrect. 
  For Chef to pass the course he must score at least P marks.
  
  Program to find out will Chef be able to pass the exam or not?
*/
#include <iostream>
using namespace std;

int main() 
{
	int T,N,X,P,sum;
	cin>>T;
	while(T--)
	{
	   sum=0;
	   cin>>N>>X>>P; 
	   sum+=X*3-(N-X);
	   if(sum>=P)
	   {
	       cout<<"PASS"<<endl;
	   }
	   else
	   {
	       cout<<"FAIL"<<endl;
	   }
	}
	return 0;
}
