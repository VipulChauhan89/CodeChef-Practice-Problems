#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N,K,A,count=0;
    cin>>N>>K;
    while(N--)
    {
        cin>>A;
        count+=((A%K==0)?1:0);
    }
    cout<<count<<endl;
    return 0;
}
