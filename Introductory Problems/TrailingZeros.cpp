#include <iostream>
using namespace std;
int main() {
    long long n,res=0;
    cin>>n;
    for(long long i=5;i<=n;i=i*5){
        res+=n/i;
    }
    cout<<res;
}