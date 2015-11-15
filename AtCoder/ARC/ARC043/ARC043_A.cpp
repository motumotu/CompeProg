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
//===================================================
 
int main()
{
    int n;
    double a, b;
    cin >> n >> a >> b;
    VI s(n);
    REP(i, n) {
        cin >> s[i];
    }
    SORT(s);
    double p, q;
    if (s[n - 1] - s[0] == 0) {
        puts("-1");
        return 0;
    }
    p = b / (s[n - 1] - s[0]);
    double sum = 0;
    REP(i, n) {
        sum += s[i] * p;
    }
    q = (a * n - sum) / n;
    printf("%.10f %.10f\n", p, q);
    return 0;
}