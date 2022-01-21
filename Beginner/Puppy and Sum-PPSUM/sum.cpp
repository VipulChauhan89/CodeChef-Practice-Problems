//Program if D = 2 and N = 3,sum(sum(3)) = sum(1 + 2 + 3) = sum(6) = 21.
#include<iostream>
using namespace std;
long int sum(int N)
{
    return (N*(N+1)/2);;
}
int main()
{
    int T,D;
    long int N;
    cin>>T;
    while(T--)
    {
        cin>>D>>N;
        for(int i=1;i<=D;i++)
        {
            N=sum(N);
        }
        cout<<N<<endl;
    }
    return 0;
}
