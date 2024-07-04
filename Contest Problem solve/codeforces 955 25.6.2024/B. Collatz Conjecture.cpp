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
    int x,y,k;cin>>x>>y>>k;

    if(k==1){
        x+=1;
        if(x%y==0){
            x/=y;
        }
        cout<<x<<endl;
        return;
    }
    while(k>0 && x>1){
        int m = x%y;
        int v = y-m;
        if(k>=v){
            x+=v;
            while(x%y==0){
                x/=y;
            }
            k-=v;
        }
        else{
            x+=k;
            k=0;
        }
    }
    cout<<x<<endl;
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