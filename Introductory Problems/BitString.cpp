#include <iostream>
using namespace std;
int main()
{
    long long i;
    cin>>i;
    long long res=1;
    for(long long j=0;j<i;j++){
        res=(res*2)%1000000007;
    }
    cout<<res<<endl;

    return 0;
}