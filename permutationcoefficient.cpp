#include<bits/stdc++.h>
using namespace std;
int permutationCoeff(int n,int k){
      // P(n,k) = n! / (n - k)!
      int fac[n+1];
       fac[0]=1;
      for(int i=1;i<n;i++){
          fac[i]=fac[i-1]*i;

      }
      return fac[n]/fac[n-k];
}
int main(){
    int n = 10, k = 2;
     
    cout << "Value of P(" << n << ", "
        << k << ") is "
        << permutationCoeff(n, k);
 
    return 0;
}