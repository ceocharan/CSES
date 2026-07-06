#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long n;
    cin>>n;
    for(long long i=0;i<n;i++){
        long long a,b;
        cin>>a>>b;
        if(a>b){
            a=a+b;
            b=a-b;
            a=a-b;
        }
        if(b>2*a || (a+b)%3!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
   return 0;
}