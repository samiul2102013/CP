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
    int n;cin>>n;
    string s;cin>>s;
    map<int,int>mp;
    mp[0]++;
    int ans = n*(n+1)/2;
    int curr =0;

    for(auto c:s){
        if(c=='1'){
            curr++;
        }
        else{
            curr--;
        }
        ans+=mp[curr]++;
    }

    cout<<ans<<"\n";
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    cin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}