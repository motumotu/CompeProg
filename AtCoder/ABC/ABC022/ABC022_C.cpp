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
#define INF 100000000
struct edge { int to; int cost; };
//===================================================
int d[301][301];
int len[301];
void init(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            d[i][j] = INF;
        }
    }
    for (int i = 0; i < n; i++) {
        d[i][i] = 0;
    }
}

void warshallFloyd(int n) {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}
int main()
{
    int n, m, u, v, l;
    cin >> n >> m;
    init(n);
    vector<int> li;
    REP(i, m) {
        cin >> u >> v >> l;
        u--;
        v--;
        if (u == 0 || v == 0) {
            if (u != 0) {
                len[u] = l;
                li.push_back(u);
            }
            if (v != 0) {
                len[v] = l;
                li.push_back(v);
            }
        }
        else {
            d[u][v] = l;
            d[v][u] = l;
        }
    }
    warshallFloyd(n);
    
    int ans = INF;
    for (int i = 1; i < li.size(); i++) {
        for (int j = 0; j < i; j++) {
            ans = min(ans, d[li[i]][li[j]] + len[li[i]] + len[li[j]]);
        }
    }
    if (ans == INF) {
        puts("-1");
    }
    else {
        printf("%d\n", ans);
    }
    return 0;
}