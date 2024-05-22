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
       int x,y;cin>>x>>y;
       if((x/2  * 5 )<=y){
        if(y%(x/2)==0){
            cout<<y/2<<endl;
        }
        else{
            cout<<y/2 + 1<<endl;
        }
       }
       else{
        y-=((x/2)*5);
        if(y%(x/2)==0){
            cout<<y/x +5<<endl;
        }
        else{
            cout<<y/x +5 <<endl;
        }
       }
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    scin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}