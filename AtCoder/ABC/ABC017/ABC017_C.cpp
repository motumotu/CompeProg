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
#include <cctype>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> PII;
typedef pair<PII, int> PPI;
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
//===================================================
int p[100002] = { 0 };
 
int main()
{
    int n, m, l, r, s, sum = 0, ans = INT_MIN;
    cin >> n >> m;
    REP(i, n) {
        cin >> l >> r >> s;
        sum += s;
        p[l] -= s;
        p[r+1] += s;
    }
    for (int i = 1; i <= m; i++) {
        p[i] += p[i - 1];
        ans = max(ans, p[i]);
    }
    cout << sum + ans << endl;
    return 0;
}