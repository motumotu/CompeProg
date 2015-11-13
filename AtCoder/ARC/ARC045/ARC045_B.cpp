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
int sum[300001] = { 0 };
int sum2[300001] = { 0 };
void solve()
{
    int n, m;
    VI ans;
    cin >> n >> m;
    VI s(m), t(m);
    for (int i = 0; i < m; i++) {
        cin >> s[i] >> t[i];
        sum[s[i]] += 1;
        sum[t[i] + 1] -= 1;
    }
    for (int i = 1; i < 300001; i++) {
        sum[i] += sum[i - 1];
    }
    int last = 1;
    for (int i = 1; i < 300001; i++) {
        if (sum[i] <= 1) {
            last = -1;
            sum2[i] = -1;
        } 
        else {
            if (last == -1) last = i;
            sum2[i] = last;
        }
    }
    for (int i = 0; i < m; i++) {
        if (sum2[t[i]] != -1 && sum2[t[i]] <= s[i]) ans.push_back(i + 1);
    }
    printf("%d\n", ans.size());
    for (int i = 0; i < ans.size(); i++) {
        printf("%d\n", ans[i]);
    }
}