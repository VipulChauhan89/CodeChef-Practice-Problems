/*
  Chef considers the climate HOT if the temperature is above 20, otherwise he considers it COLD. 
  You are given the temperature C, find whether the climate is HOT or COLD.
*/
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T,C;
	cin>>T;
	while(T--)
	{
	   cin>>C; 
	   (C>20)?cout<<"HOT"<<endl:cout<<"COLD"<<endl;
	}
	return 0;
}
