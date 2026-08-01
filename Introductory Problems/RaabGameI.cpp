#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(b+c>a){
            cout<<"NO"<<endl;
        }
        else if((b+c!=0) && (b==0 || c==0)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=1;i<=a;i++){
                cout<<i<<" ";
            }
            cout<<endl;

            for(int i=b+1;i<=b+c;i++){
                cout<<i<<" ";
            }
            for(int i=1;i<=b;i++){
                cout<<i<<" ";
            }
            for(int i=b+c+1;i<=a;i++){
                cout<<i<<" ";
            }
        }
    }
}