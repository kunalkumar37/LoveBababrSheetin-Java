//nCr =fac(n)/(fac(r)*fac(n-r))
#include<bits/stdc++.h>
using namespace std;
int fac(int n){
  int fact[n];
     fact[0]=1;
     fact[1]=1;
    for(int i=2;i<=n;i++){
        fact[i]=fact[i-1]*i;
    }
    return fact[n];

}
int nCr(int n,int r){
    return fac(n)/(fac(r)*fac(n-r));
}


int main(){
    int n,r;
     n=2,r=4;
    cout<<nCr(n,r);
    return 0;
}