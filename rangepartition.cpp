#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
    cin>>t;
    for(int i=1;i<=t;i++){
    long long x,y,z;
    cin>>x>>y>>z;
    y=y+z;
    long long to=(x*(x+1))/2;
    long long val=0;
    if((to%y)==0){
         cout<<"Case #"<<i<<": "<<"POSSIBLE"<<endl;

         y=to/y;
         z=z*y;
         to=x;

         vector<long long>vc(to+3);
         for(int i=1;i<=to;i++){
             if(i>=1){
                 vc[i-1]=i;
             }
         }
         for(long long i = to-1;i >= 0; i--)
            {
                if(vc[i] <= z)
                
                    z = z - vc[i],
                    vc[i]=0;
                
            }
          
            for(auto it: vc){
                if(it != 0)
                   ++val;
            }
            
            cout<<val<<endl;
            for(int i =0; i < to; ++i) {
                if(vc[i] > 0 || vc[i] < 0) {
                
                    cout<<i+1<<" ";
                }
                
            }
            cout<<endl;
    }

    else{
        cout<<"Case #"<<i<<": "<<"IMPOSSIBLE"<<endl;
    }
    }
	
	return 0;
}