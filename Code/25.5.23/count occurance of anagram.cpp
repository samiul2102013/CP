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
    string pat, txt;cin>>txt>>pat;

    int k = pat.length();
    int n = txt.length();
    int i=0,j=0,cnt=0;
    string ans="";
    sort(pat.begin(), pat.end());
    while(j<n){
        ans+=txt[j];
        if(j<k-1){
            j++;
        }
        else{
            string tmp;
            tmp = ans;
            sort(tmp.begin(), tmp.end());

            if(tmp == pat){
                cnt++;
            }
            ans.erase(0,1);
            i++;
            j++;
        }
    }
    cout<<cnt<<endl;

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