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
 
void solve()
{
    int n;
    cin >> n;
    VI a(n);
    REP(i, n) {
        cin >> a[i];
        if (i != 0) a[i] += a[i - 1];
    }
    if (a[n-1] % n != 0) { puts("-1"); return; }
    int ans = 0;
    int ave = a[n - 1] / n;
    for (int i = 1; i < n; i++) {
        if (a[n - 1] - a[i - 1] < ave * (n - i) || a[i - 1] < ave * i) ans++;
    }
    printf("%d\n", ans);
}