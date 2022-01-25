//Write a program to take a character (c) as input and check whether the given character is a vowel or a consonant.
#include <iostream>
using namespace std;

int main() 
{
	char c;
	cin>>c;
	if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
	    cout<<"Vowel"<<endl;
	}
	else
	{
	    cout<<"Consonant"<<endl;
	}
	return 0;
}
