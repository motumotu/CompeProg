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
#define EPS 1e-7
#define PI  3.14159265358979323846
#define INF 10000000
struct edge { int to; int cost; };
//===================================================
 
int main()
{
    int n;
    double ans = 0, sum;
    cin >> n;
    vector<int> a(n), b(n), c(n), d(n), e(n);
    REP(i, n) {
        cin >> a[i] >> b[i] >> c[i] >> d[i] >> e[i];
        sum = a[i] + b[i] + c[i] + d[i] + e[i] * 110.0 / 900;
        if (sum > ans) { ans = sum; }
    }
    printf("%.10f\n", ans);
}