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
 
int main()
{
    int n, m, a, ans = 0;
    queue<int> q;
    cin >> n >> m;
    REP(i, m) {
        cin >> a;
        q.push(a);
        while (!q.empty() && q.front() < a - n) {
            q.pop();
        }
        ans = max(ans, SIZE(q));
    }
    printf("%d\n", ans);
    return 0;
}