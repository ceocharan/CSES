#include <iostream>
using namespace std;
 
 
long long value(long x,long y){
         if(x==y){
                long long v=(x*y)-(x-1);
                return v;
            }
            else if(x>y){
                long long v=(x*x)-(x-1);
                if(x%2==0){
                    v+=(x-y);
                }
                else{
                    v-=(x-y);
                }
                return v;
            }
            else{
                long long v=(y*y)-(y-1);
                if(y%2==0){
                    v-=(y-x);
                }
                else{
                    v+=(y-x);
                } 
 
                return v;
 
            }
    }
int main()
{
    long long  n;
    cin>>n;
        for(long long i=0;i<n;i++){
            long long x;
            cin>>x;
            long long y;
            cin>>y;
            cout<<value(x,y)<<endl;
           
        }
}
