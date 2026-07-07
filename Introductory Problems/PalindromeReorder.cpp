#include <iostream>
#include <map>
using namespace std;
 
int main()
{
    map<char,int> m;
    string st;
    cin>>st;
    for(long i=0;i<st.length();i++){
        m[st[i]]=m[st[i]]+1;
    }
    string s1,s2,s3;
    int co=0;
    for(auto i:m){
        int v=i.second;
        
        s1+=string(v/2,i.first);
        s2=string(v/2,i.first)+s2;
            
        if(v%2==1){
            co++;
            if(co>1){
                break;
            }
            s3=i.first;
        }
       
    }
 
     if(co>1){
            cout<<"NO SOLUTION"<<endl;
        }
        else{
            cout<<s1+s3+s2;
        }
 
    return 0;
}