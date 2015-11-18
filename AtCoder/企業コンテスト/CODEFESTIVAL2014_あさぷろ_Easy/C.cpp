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
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)
#define CLEAR(d) memset((d), 0, (sizeof((d))))
#define ALL(c) (c).begin(), (c).end()
#define ABS(x) ((x < 0) ? -(x) : (x))
#define SORT(x) sort((x).begin(), (x).end())
#define RSORT(x) sort((x).begin(), (x).end(), greater<int>() )
#define SIZE(a) ((int)((a).size()))
#define MAX3(a, b, c) (max(max((a), (b)), (c)))
#define MIN3(a, b, c) (min(min((a), (b)), (c)))
#define MOD 1000000007
#define EPS 1e-5
#define PI  (acos(-1))
#define INF 10000000
//===================================================
#define N 1000
typedef pair<int, int> PA;
struct edge{ int to, cost; };
vector<edge> e[N + 1];
 
void shortPath(int s, int n[])
{
    //int n[N + 1];
    //memset(n, -1, sizeof(n));
    //REP(i, N + 1) n[i] = INF;
    fill(n, n + N, INF);
    //priority_queue<PA, vector<PA>, greater<PA> > q;
    //priority_queue<int> q;
    queue<int> q;
    //q.push(PA(0, s));
    q.push(s);
    n[s] = 0;
    while (!q.empty()) {
        int t = q.front(); q.pop();
        for (int i = 0; i < e[t].size(); i++) {
            int to = e[t][i].to;
            int cost = e[t][i].cost;
            if (n[to] > n[t] + cost) {
                n[to] = n[t] + cost;
                q.push(to);
            }
        }
    }
    //return n[g];
}
 
int main()
{
    int n, m, s, t, x, y, d, ans = -1;
    cin >> n >> m >> s >> t;
    //scanf("%d %d %d %d", &n, &m, &s, &t);
    for (int i = 0; i < m; i++) {
        cin >> x >> y >> d;
        //scanf("%d %d %d", &x, &y, &d);
        //edge e1 = { x, d }, e2 = { y, d };
        edge e1 = { x, d };
        e[y].push_back(e1);
        e1.to = y;
        e[x].push_back(e1);
    }
    int n1[N + 1];
    shortPath(s, n1);
    int n2[N + 1];
    shortPath(t, n2);
    for (int u = 1; u <= n; u++) {
        if (u == s || u == t) { continue; }
        if (n1[u] != INF && n1[u] == n2[u]) { ans = u; break; }
    }
    printf("%d\n", ans);
 
    return 0;
}