/*
    Chef has recently introduced a feature which allows you to open any user’s submitted code (not just your own), and ask an AI to explain that code in English. For example, you can go to https://www.codechef.com/viewsolution/70530506 and click on "Analyse This Code". But there is a restriction that the feature works only on codes which are at most 
    1000 characters long. Given the number of characters, C, in a particular code, output whether the feature is available on this code or not.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int C;
	cin>>C;
	(C<=1000)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	return 0;
}