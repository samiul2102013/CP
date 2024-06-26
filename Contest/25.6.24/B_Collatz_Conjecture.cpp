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
    int a, b, x;
    cin >> a >> b >> x;
    while (x > 0)
    {
        int m = a % b;
        int s = x-m;
        cout << s << endl;
        if (x >= s)
        {
            cout<<"d"<<" ";
            a += s;
            while (a % x == 0)
            {
                a /= x;
                cout<<"l"<<a<<" ";
            }

            cout<<a<<endl;
            x-=s;
        }
        else
        {
            a += x;
            x = 0;
            cout<<a<<endl;
        }
    }
    cout << a << endl;
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