
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

bool lowerCaseCheck(string s) {
    for(int i=0;i<s.size();i++){
        char c = s[i]
        if(isupper(c)){
            return false;
        }
    }

    return true;
}


bool digitchek(string s){
    int d, l;
    for(int i=0;i<s.size();i++){
        char c = s[i];
        if(isdigit(c)){
            d = i;
        }
    }
    for(int i=0;i<s.size();i++){
        char c = s[i];
        if(islower(c)){
            l=i;
            break;
        }
    }

    if(d>l){
        return false;
    }
    
    return true;
}

bool sortdigit(string s){
    string ans = "";
    for(int i=0;i<s.size();i++){
        char c = s[i];
        if(isdigit(c)){
            ans+=c;
        }
    }

    for(int i=0;i<ans.size()-1 ;i++){
        if(ans[i+1]>ans[i]){
            return false;
        }
    }

    return true;
}

bool sortletter(string s){
    string ans = "";
    for(int i=0;i<s.size();i++){
        char c = s[i];
        if(islower(c)){
            ans+=c;
        }
    }

    for(int i=0;i<ans.size()-1 ;i++){
        if(ans[i+1]>ans[i]){
            return false;
        }
    }

    return true;
}

void TEST_CASES()
{
    string s;cin>>s;

    if(lowerCaseCheck(s)){
        cout<<"shob cuto hater";
    }

    /* if(digitchek(s)){
        cout<<"digit ok"<<endl;
    }

    if(sortdigit(s)){
        cout<<"digitsoredd"<<endl;
    }

    if(sortletter(s)){
        cout<<"letter sorted"<<endl;
    } */
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