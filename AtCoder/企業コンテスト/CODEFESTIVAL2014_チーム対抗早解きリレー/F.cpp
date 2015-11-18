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
vector<int> e[100001];
int use[100001];
int len(int n, int cnt)
{
    int flag = 1, mi = INT_MAX;
    use[n] = cnt;
    if (e[n].size() == 1 && use[e[n][0]] != 0) { return 0; }
    for (int i = 0; i < e[n].size(); i++) {
        mi = min(mi, use[e[n][i]]);
        if (use[e[n][i]] != 0 && use[e[n][i]] + 1 != use[n]) { return cnt - use[e[n][i]]; }
        if (use[e[n][i]] != 0) continue;
        flag = 0;
        int l = len(e[n][i], cnt + 1);
        if (l != 0) return l;
    }
    if (flag) {
        return use[n] - mi;
    }
    return 0;
}
 
int main()
{
    int n, x, y;
    cin >> n;
    REP(i, n) {
        cin >> x >> y;
        e[x].push_back(y);
        e[y].push_back(x);
    }
    printf("%d\n", len(1, 1) + 1);
    return 0;
}