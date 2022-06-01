#include <bits/stdc++.h>
#define int long long int
#define debug cout<<"K"
#define mod 1000000007

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 int t=1;
 cin>>t;
 while(t>0)
 {
        int n;
        cin>>n;
        unordered_map<int,int>mp;
        int a[n];
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
        mp[a[i]]++;
        }
        int b[n];
        for(int i=0;i<n;i++)
        {
        cin>>b[i];
        mp[a[i]]++;
        }
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({a[i],b[i]});
        }
        sort(v.begin(),v.end());
        vector<pair<int,int>>all;
        for(int i=0;i<n;i++)
        {
            int temp=mp[a[i]];
            int tempu=mp[b[i]];
            if(a[i]==v[i].first&&b[i]==v[i].second)
            {

            }
            else
            {
                for(int j=i+1;j<n;j++)
                {
                    if(a[j]==v[i].first&&b[j]==v[i].second)
                    {
                        swap(a[i],a[j]);
                        swap(b[i],b[j]);
                        all.push_back({i+1,j+1});
                    }
                }
            }
        }
        bool ans=true;
        for(int i=1;i<n;i++)
        {
            if(v[i].first>=v[i-1].first&&v[i].second>=v[i-1].second)
            {

            }
            else
            ans=false;
        }
        if(ans)
        {
            cout<<all.size()<<"\n";
            for(auto it:all)
            cout<<it.first<<" "<<it.second<<"\n";
        }
        else
        cout<<"-1\n";
  
        t--;
 }
 return 0;
}