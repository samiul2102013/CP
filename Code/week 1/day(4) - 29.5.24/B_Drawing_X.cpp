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
    int a =0,b=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a==b && j==a){
                cout<<"X";
            }
            else if(j==a){
                cout<<"\\";
            }
            else if(j==b){
                cout<<"/";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
        a++;
        b--;
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