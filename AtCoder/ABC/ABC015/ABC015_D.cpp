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
#include <ctime>
using namespace std;
typedef long long ll;
typedef pair<int, int> PII;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)
#define CLEAR(d) memset((d), 0, (sizeof((d))))
#define ALL(c) (c).begin(), (c).end()
#define ABS(x) ((x < 0) ? -(x) : (x))
#define SORT(x) sort((x).begin(), (x).end())
#define RSORT(x) sort((x).begin(), (x).end(), greater<int>() )
#define SIZE(a) ((int)((a).size()))
#define MOD 1000000007
#define EPS 1e-5
#define PI  (acos(-1))
#define INF 10000000
struct edge{ int to, cost; };
template<class T> inline std::string toString(T x) { std::ostringstream sout; sout << x; return sout.str(); }
//===================================================
int dp[51][10001][51];
int main()
{
    int w, n, k, ans = 0;
    cin >> w >> n >> k;
    int a[1000], b[1000];
    REP(i, n) {
        cin >> a[i] >> b[i];
    }
    REP(i, n + 1) {
        REP(j, w + 1) {
            REP(t, k + 1) {
                dp[i][j][k] = INT_MIN;
                dp[i][j][k] = 0;
            }
        }
    }
    dp[0][0][0] = 0;
    dp[0][0][0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= w; j++) {
            for (int t = 0; t <= k; t++) {
                dp[i + 1][j][t] = max(dp[i][j][t], dp[i + 1][j][t]);
                if (j - a[i] >= 0 && dp[i][j - a[i]][t] != INT_MIN && dp[i][j][t+1] < dp[i][j - a[i]][t] + b[i] && t+1 <= k) {
                    dp[i + 1][j][t + 1] = dp[i][j - a[i]][t] + b[i];
                }
            }
        }
    }
    REP(i, n + 1) {
        REP(j, w + 1) {
            REP(t, k + 1) {
                if (dp[i][j][k] == INT_MIN) continue;
                ans = max(ans, dp[i][j][k]);
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}