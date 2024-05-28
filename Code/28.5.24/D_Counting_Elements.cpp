#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 +5;
typedef pair<int,int> pii;
int freq[1001];



void TEST_CASES()
{
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int k;cin>>k;
        if(freq[k]<1){
            v.push_back(k);
        }
        freq[k]++;
    }
    
    int ans=0;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++){
        if(v[i]+1==v[i+1]){
            ans+=freq[v[i]];
        }
    }

    cout<<ans<<endl;

}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    //cin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}