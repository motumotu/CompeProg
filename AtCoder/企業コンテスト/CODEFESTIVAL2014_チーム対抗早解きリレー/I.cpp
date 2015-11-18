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
#define MAX 100000
ll a[MAX + 1];
ll b[MAX + 1];
ll c[MAX + 1];
vector<edge> e[MAX + 1];
 
ll dijkstra(vector<edge> e[], int start, int end)
{
    queue<int> q;
    ll dist[MAX + 1];
    REP(i, MAX + 1) dist[i] = LLONG_MAX;
    q.push(start);
    dist[start] = 0;
    while (!q.empty()) {
        int now = q.front(); q.pop();
        REP(i, SIZE(e[now])) {
            int to = e[now][i].to;
            ll cost = e[now][i].cost;
            if (now != end && dist[now] <= c[now]) {
                cost += c[now] - dist[now];
            }
            else if (now != end && (dist[now] - c[now]) % (a[now] + b[now]) < a[now] + b[now] && (dist[now] - c[now]) % (a[now] + b[now]) >= a[now]) {
                cost += (a[now] + b[now]) - (dist[now] - c[now]) % (a[now] + b[now]);
            }
            // XV
            if (dist[to] > dist[now] + cost) {
                q.push(to);
                dist[to] = dist[now] + cost;
            }
        }
    }
    return dist[end];
}
 
int main()
{
    int n, m, s, d, x, y, t;
    cin >> n >> m >> s >> d;
    REP(i, n + 1) {
        if (i == 0) continue;
        cin >> a[i] >> b[i] >> c[i];
    }
    REP(i, m) {
        cin >> x >> y >> t;
        edge e1 = { x, t }, e2 = { y, t };
        e[y].push_back(e1);
        e[x].push_back(e2);
    }
    cout << dijkstra(e, s, d) << endl;
    return 0;
}