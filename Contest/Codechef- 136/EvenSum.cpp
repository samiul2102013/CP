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
    vector<int>v(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    int first_bejor =0,last_bejor = 0;
    for(int i=0;i<=n/2;i++){
        if(v[i]%2==1){
            first_bejor=i+1;
            break;
        }
    }
    for(int j=n-1;j>=n/2;j--){
        if(v[j]%2==1){
            last_bejor=j;
            break;
        }
    }
    int b = n-last_bejor;

    cout<<first_bejor<<" "<<last_bejor<<" "<<b<<endl;

    if(sum%2==0){
        cout<<n<<endl;
    }
    else if(first_bejor<=b){
        cout<<n-first_bejor<<endl;
    }
    else{
        cout<<n-b<<endl;
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