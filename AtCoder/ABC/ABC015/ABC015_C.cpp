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
int t[5][5];
 
int main()
{
    int n, k;
    cin >> n >> k;
    REP(i, n) {
        REP(j, k) {
            cin >> t[i][j];
        }
    }
    int flag = 1;
    int select[5] = { 0 };
    while (select[n-1] < k) {
        int ans = 0;
        REP(i, n) {
            if (i == 0) {
                ans = t[0][select[0]];
                continue;
            }
            ans ^= t[i][select[i]];
        }
        if (ans == 0) {
            flag = 0;
            //REP(i, n) printf("%d ", select[i]);
            break;
        }
 
        select[0] += 1;
        for (int i = 1; i < n; i++) {
            if (select[i - 1] >= k) {
                select[i - 1] = 0;
                select[i] += 1;
            }
        }
    }
    printf("%s\n", (flag) ? "Nothing" : "Found");
    return 0;
}