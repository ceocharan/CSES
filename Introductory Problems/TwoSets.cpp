#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long s=(n*(n+1))/2;
    if(s%2==0){
        cout<<"YES"<<endl;
        long long s1=s/2;
    vector<long long> v1;
    vector<long long> v2;
    for(long long i=n;i>0;i--){
        if(s1>=i){
            v1.push_back(i);
            s1-=i;
        }
        else{
            v2.push_back(i);
        }
    }
    cout<<v1.size()<<endl;
    for(auto i:v1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<v2.size()<<endl;
    for(auto i:v2){
        cout<<i<<" ";
    }
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}