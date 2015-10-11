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
typedef unsigned long long ull;
typedef pair<int, int> PII;
typedef vector<int> VI;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)
#define CLEAR(d) memset((d), 0, (sizeof((d))))
#define ALL(c) (c).begin(), (c).end()
#define ABS(x) ((x < 0) ? -(x) : (x))
#define SORT(x) sort((x).begin(), (x).end())
#define RSORT(x) sort((x).begin(), (x).end(), greater<int>() )
#define SIZE(a) ((int)((a).size()))
#define MOD 1000000007
#define EPS 1e-7
#define PI  3.14159265358979323846
#define INF 10000000
struct edge { int to; int cost; };
void solve();
void init()
{
    srand((unsigned int)time(NULL));
}
int main()
{
    init();
    solve();
    return 0;
}
//================================================================
int dp[21] = { 0 };
int n;
int calc(int num, VI b)
{
    if (dp[num] != 0) return dp[num];
    int mi = INT_MAX, ma = 0;
    for (int i = 2; i <= n; i++) {
        if (b[i] == num) {
            int t = calc(i, b);
            mi = min(t, mi);
            ma = max(t, ma);
        }
    }
    return dp[num] = mi + ma + 1;
}
void solve()
{
    cin >> n;
    VI b(n+3);
    REP(i, 21) dp[i] = 1;
    REP(i, n - 1) {
        cin >> b[i + 2];
        dp[b[i + 2]] = 0;
    }
    cout << calc(1, b) << endl;
}