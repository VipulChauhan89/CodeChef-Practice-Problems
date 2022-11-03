/*
    Chef is moving to a new house! Unfortunately, this means he now has to pack up his things so that they can be moved too. Currently, Chef is packing up his (rather impressive) book collection into cardboard boxes.
    Chef has X shelves of books, each of which contains exactly Y books. Each cardboard box can hold at most Z books. In order to not mess up the organization of the books, Chef will also ensure that books from different shelves will not be placed in the same box.
    Under these conditions, what is the minimum number of boxes needed to pack all the books?
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T;
	float X,Y,Z;
	cin>>T;
	while(T--)
	{
	    cin>>X>>Y>>Z;
	    cout<<X*ceil(Y/Z)<<endl;
	}
	return 0;
}