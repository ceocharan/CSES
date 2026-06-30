#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    for(long long i=1;i<=n;i++){
        long long v=i*i;
        long long ans=((v*(v-1))/2)-(((i-1)*(i-2)*2)*2);
        cout<<ans<<endl;
    }

    return 0;
}