#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>

using namespace std;

#define minus cout << -1 << endl;
#define cno cout << "No" << endl;
#define PI 3.14159265358979323846
#define pow2(x) (1LL << (x))
#define pow2d(x) (1.0L / (1LL << (x)))
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repr(i, n) for (int i = (n) - 1; i >= 0; --i)
#define in(x, arr)      \
    for (auto &x : arr) \
    cin >> x
#define out(x, arr)           \
    for (const auto &x : arr) \
    cout << x << " "

class Solution
{
public:
    void solve()
    {

        int a, b, k;
        cin >> a >> b >> k;
        int inc = 0;
        int ans = a;
        while (ans <= b)
        {
            ans = ans * k;
            if(ans<=b){
                inc++;
            }
            else{
                ans/=k;
                break;
            }
            cout<<ans<<" "<<inc<<endl;
        }

        int finalans = inc + (b - ans);

        cout << finalans << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    t=1;

    Solution solution;
    while (t--)
    {
        solution.solve();
    }

    return 0;
}
