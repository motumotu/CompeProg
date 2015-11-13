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
struct edge { int to; int cost; edge(int to = 0, int cost = 0) :to(to), cost(cost){} };
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
int N;     // グラフの頂点数を表す整数 N(1≦N≦100,000) 
int X;     // 問題文中の整数 X(0≦X≦10^9)
vector<edge> ed[100001];
int memo[100001];
 
void dfs(int now, int use[], int pos)
{
    for (int i = 0; i < ed[pos].size(); i++) {
        int p = ed[pos][i].to;
        if (use[p]) continue;
        use[p] = 1;
        memo[p] = now ^ ed[pos][i].cost;
        dfs(memo[p], use, p);
        use[p] = 0;
    }
}
 
void solve()
{
    cin >> N >> X;
    REP(i, N - 1) {
        int x, y, c;
        cin >> x >> y >> c;
        ed[x].push_back(edge(y,c));
        ed[y].push_back(edge(x,c));
    }
    int use[100001] = { 1, 1 };
    for (int i = 0; i < ed[1].size(); i++) {
        int p = ed[1][i].to;
        use[p] = 1;
        memo[p] = ed[1][i].cost;
        dfs(memo[p], use, p);
        use[p] = 0;
    }
    ll sum = 0;
    map<int, int> mp;
    for (int i = 1; i <= N; i++) {
        mp[X^memo[i]]++;
    }
    for (int i = 1; i <= N; i++) {
        sum += mp[memo[i]];
        if (X == 0) sum--;
    }
    cout << sum / 2  << endl;
}