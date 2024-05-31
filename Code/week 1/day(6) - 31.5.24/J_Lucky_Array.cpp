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
const int N =1e3 +5;
typedef pair<int,int> pii;



void TEST_CASES()
{
    int n;cin>>n;
    vector<int>v(n);
    int mn = INT_MAX;
    map<int,int>frq;
    for(int i=0;i<n;i++){
        cin>>v[i];
        frq[v[i]]++;
        mn = min(v[i],mn);
    }

    int t = frq[mn];
    if(t%2==1){
        cout<<"Lucky"<<endl;
    }
    else{
        cout<<"Unlucky"<<endl;
    }
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