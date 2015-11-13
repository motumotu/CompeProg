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
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)
#define CLEAR(d) memset((d), 0, (sizeof((d))))
#define ALL(c) (c).begin(), (c).end()
#define SORT(x) sort((x).begin(), (x).end())
#define RSORT(x) sort((x).begin(), (x).end(), greater<int>() )
#define SIZE(a) ((int)((a).size()))
#define MAX3(a, b, c) (max(max((a), (b)), (c)))
#define MIN3(a, b, c) (min(min((a), (b)), (c)))
#define MOD 1000000007
#define EPS 1e-5
#define PI  (acos(-1))
#define INF 10000000000000
struct edge{ int to, cost; };
//===================================================
 
int main()
{
    int n, ans = INT_MAX;
    cin >> n;
    vector<int> t(n);
    REP(i, n) cin >> t[i];
    for (int i = 0; i < (1 << n); i++) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < n; j++) {
            if ((i >> j) & 1 == 1) {
                sum1 += t[j];
            }
            else {
                sum2 += t[j];
            }
        }
        ans = min(ans, max(sum1, sum2));
    }
    cout << ans << endl;
    return 0;
}