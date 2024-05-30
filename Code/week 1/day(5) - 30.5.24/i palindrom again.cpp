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
const int N = 2e5 + 5;
typedef pair<int, int> pii;

void TEST_CASES()
{
    int n;
    cin >> n;
    string s = to_string(n);
    int t = s.size();
    for (int i = 0; i < t+1 / 2; i++)
    {
        if (s[i] != s[t - i - 1])
        {
            bool flag = false;
            for (int j = s.size() - 1; j >= 0; j--)
            {
                if(s[j] != '0'){
                    flag=true;
                    continue;
                }
                if (flag==false)
                {
                    continue;
                }
                else
                {
                    cout << s[j];
                }
            }
            cout<<endl;
            cout << "NO" << endl;
            return;
        }
    }
    cout<<n<<endl<<"YES"<<endl;
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t = 1;
    // cin>>t;
    while (t--)
    {
        TEST_CASES();
    }
    return 0;
}