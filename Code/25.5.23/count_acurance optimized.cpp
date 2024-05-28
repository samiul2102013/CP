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
    string txt, pat;
    cin >> txt >> pat;
    vector<int> frq1(26, 0);
    vector<int> frq2(26, 0);
    for (int i = 0; i < pat.size(); i++)
    {
        frq1[pat[i] - 'a']++;
    }

    int i = 0, j = 0, cnt = 0;
    while (j < txt.size())
    {
        frq2[txt[j] - 'a']++;
        if (j < pat.size() - 1)
        {
            j++;
        }
        else
        {
            bool flag = true;
            for (int k = 0; k < 26; k++)
            {
                if (frq1[k] != frq2[k])
                {
                    flag = false;
                    break;
                }
            }
            if (flag == true)
            {
                cnt++;
            }
            frq2[txt[i] - 'a']--;
            i++;
            j++;
        }
    }
    cout << cnt << endl;
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