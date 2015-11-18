#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <string>
#include <map>
#include <set>
#include <sstream>
#include <functional>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define MOD 1000000007
#define EPS 1e-5
 
int main()
{
    ll n, h, a, b, c, d, e, y , ans = LLONG_MAX;
    cin >> n >> h >> a >> b >> c >> d >> e;
    y = n + 1;
    for (ll x = 0; x <= n; x++) {
        ll s = (n - x)*e - b*x - h;
        if (s > 0) {
            y = s / (d + e) + 1;
        }
        else {
            y = 0;
        }
        ans = min(ans, x*a + y*c);
        /*
        for (ll j = 0; i + j <= n; j++) {
            ll sum = i*b + j*d + h;
            if (sum <= e*(n - i - j)) { continue; }
            ans = min(ans, i*a+j*c);
            //cout << i << " " << j << " " << i*a + j*c << endl;
            break;
        }
        */
    }
    cout << ans << endl;
    return 0;
}