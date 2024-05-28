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
    int n,k;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>k;
    int i=0,j=0;
    queue<int>q;

    while(j<n){
        if(v[j]<0) q.push(v[j]);
        if(j<k-1){
            j++;
            
        }
        else{
            if(q.empty()){
                cout<<0<<" ";
            }
            else{
                cout<<q.front()<<" ";
            }
            if(v[i]<0){
                q.pop();
            }

            i++;
            j++;
        }
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