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
    string s, t = to_string(n);
    s = t;

    for (int i = 0; i < (t.size() + 1) / 2; i++)
    {

        if (t[i] != t[t.size() - i - 1])
        {
            reverse(s.begin(), s.end());
            bool flag = false;

            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != '0')
                {
                    flag = true;
                }

                if (flag)
                {
                    cout << s[i];
                }
            }
            cout<<endl;
            cout<<"NO"<<endl;
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