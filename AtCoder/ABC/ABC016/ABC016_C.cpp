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
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)
#define CLEAR(d) memset((d), 0, (sizeof((d))))
#define ALL(c) (c).begin(), (c).end()
#define ABS(x) ((x < 0) ? -(x) : (x))
#define SORT(x) sort((x).begin(), (x).end())
#define RSORT(x) sort((x).begin(), (x).end(), greater<int>() )
#define SIZE(a) ((int)((a).size()))
#define MOD 1000000007
#define EPS 1e-10
#define PI  (acos(-1))
#define INF 10000000
struct edge { int to; int cost; };
//===================================================
 
int d[10][10];
 
void init() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            d[i][j] = INF;
        }
    }
    for (int i = 0; i < 10; i++) {
        d[i][i] = 0;
    }
}
 
void warshall_floyd(int v) {
    for (int k = 0; k < v; k++) {
        for (int i = 0; i < v; i++) {
            for (int j = 0; j < v; j++) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}
 
int main()
{
    int n, m, a, b;
    cin >> n >> m;
    init();
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        d[a-1][b-1] = 1;
        d[b-1][a-1] = 1;
    }
    warshall_floyd(n);
    int ans[10] = { 0 };
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ans[i] += (d[i][j] == 2) ? 1 : 0;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d\n", ans[i]);
    }
    return 0;
}