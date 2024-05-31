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



void TEST_CASES()
{
    int n,k;cin>>n>>k;
    vector<int>v(n);
    int cnt=0;
    int mn = 1e9;
    for(int i=0;i<n;i++){
        cin>>v[i];
        cnt++;
        mn = min(mn,v[i]);
        if(cnt==k){
            cout<<mn<<" ";
            mn = 1e9;
            cnt=0;
        }
    }
    if(n%k!=0){
        cout<<mn;
    }
    cout<<endl;
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