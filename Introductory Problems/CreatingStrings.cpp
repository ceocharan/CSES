#include <iostream>
#include <map>
#include <set>
using namespace std;

void factorial(int n, map<char,int> &m) {
    int a=1;
    for(int i=1;i<=n;i++){
        m[i]=a*=i;
    }
}

void rec(string st,string res,set<int> se,set<string> &str) {
    if(res.length()==st.length()){
        str.insert(res);
        return;
    }
    for(unsigned int i=0;i<st.length();i++) {
        if(se.find(i)==se.end()){
            se.insert(i);
            res=res+st[i];
            rec(st,res,se,str);
            se.erase(i);
            res.erase(res.length()-1,1);
        }
    }
}

int main() {
    string st;
    cin>>st;
    int n=st.length();
    map<char,int> m;
    for(int i=0;i<n;i++) {
        m[st[i]]++;
    }
    map<char,int> mp;
    factorial(n,mp);
    int a=mp[n];
    int b=1;
    for(auto i:m) {
        b*=mp[i.second];
    }
    cout<<a/b<<endl;
    string res="";
    set<int> se;
    set<string> str;
    rec(st,res,se,str);
    for(auto k:str){
        cout<<k<<endl;
    }

    return 0;
}

