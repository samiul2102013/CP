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
    string s;cin>>s;
    int t =0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') t++;
    }

    int ans =0;
    if(s[0]=='1' && s[2]=='1'){
        ans+=100;
    }
    if(s[1]=='1' && s[2]=='1'){
        ans+=100;
    }
    if(s[0]=='1' && s[3]=='1'){
        ans+=100;
    }
    if(s[1]=='1' && s[3]=='1'){
        ans+=100;
    }

    ans = ans + (t*10) +1;
    cout<<ans<<endl;
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