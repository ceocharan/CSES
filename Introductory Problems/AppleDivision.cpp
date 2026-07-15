#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long rec(unsigned long long i,vector<long long> v,long long s,long long sum,unsigned long long l) {
    if(i>=v.size()) {
        if(l<v.size())
            return abs(s-abs(s-sum));
        return 1e9+7; 
    }
    return min(rec(i+1,v,s,sum,l),rec(i+1,v,s+v[i],sum,l+1));
}

int main() {
    int n;
    cin>>n;
    vector<long long> v(n);
    long long sum=0;
    for(long long i=0;i<n;i++) {
        cin>>v[i];
        sum+=v[i];
    }
    cout<<rec(0,v,0,sum,0)<<endl;
    return 0;
}

