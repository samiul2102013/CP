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
    int a=n-1;
    for(int i=0;i<n;i++){
        int t = a-i;
        for(int k=0;k<t;k++){
            cout<<" ";
        }
        for(int j=0;j<i*2+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    int t=0;

    for(int i=n-1;i>=0;i--,t++){
        for(int j=0;j<t;j++){
            cout<<" ";
        }

        for(int k=0;k<i*2+1;k++){
            cout<<"*";
        }
        cout<<endl;

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