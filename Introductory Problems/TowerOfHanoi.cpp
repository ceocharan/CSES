#include <iostream>
using namespace std;
int rec(int n,int start,int mid,int end){
    if(n==1){
        cout<<start<<" "<<end<<endl;
        return 1;
    }
    int l=rec(n-1,start,end,mid);
    cout<<start<<" "<<end<<endl;
    int r=rec(n-1,mid,start,end);
    return l+r+1;
}
int main(){
    int n;
    cin>>n;
    cout<<(1<<n)-1<<endl;
    rec(n,1,2,3);
    return 0;
}

