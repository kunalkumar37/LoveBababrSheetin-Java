#include<bits/stdc++.h>
using namespace std;

int editdistance(string s, string t,int n,int m){
    if(n==0)
        return m;
    if(m==0)
        return n;
    if(s[n-1]==t[m-1])
        return editdistance(s,t,n-1,m-1);
    else
        return 1+min(editdistance(s,t,n-1,m),min(editdistance(s,t,n,m-1),editdistance(s,t,n-1,m-1)));
}
int main(){
     string s;
     string t;
     cin>>s>>t;
    int n=s.length();
    int m=t.length();
    cout<<editdistance(s,t,n,m);
    return 0;
}