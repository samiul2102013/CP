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
    string s = to_string(n), ans = "", tmp;
    tmp = s;
    int t = s.size();
    reverse(s.begin(), s.end());
    for (int i = 0; i < t + 1 / 2; i++)
    {
        if (s[i] != s[t - i - 1])
        {
            if (s[0] == '0')
            {
                bool flag = false;
                for (int i = 0; i < s.size(); i++)
                {
                    if (s[i] == '0')
                    {
                        flag = true;
                        continue;
                    }
                    if (flag)
                    {
                        ans += s[i];
                    }
                }
                cout << ans << endl;
                cout << "NO" << endl;
                return;
            }
            else
            {
                cout << tmp << endl;
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << n << endl
         << "YES" << endl;
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