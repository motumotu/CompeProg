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
 
void solve()
{
    ll n, x = 1;
    int dep = 0, cnt = 0;
    cin >> n;
    for (ll i = n; i >= 1; i /= 2) dep++;
    for (cnt = 0; x <= n; cnt++) {
        // ‚‹´ŒN
        if (cnt % 2 == 0) {
            if (dep % 2) x = x * 2 + 1;
            else x = x * 2;
        }
        // Â–ØŒN
        else {
            if (dep % 2) x = x * 2;
            else x = x * 2 + 1;
        }
    }
    cout << ((cnt % 2 == 0) ? "Takahashi" : "Aoki") << endl;
 
}