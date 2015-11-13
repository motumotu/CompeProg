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
#define MOD 1000003
#define EPS 1e-7
#define PI  (acos(-1))
#define INF 10000000
struct edge { int to; int cost; };
//===================================================
 
// Binary Indexed Trees
template<class T> class BIT {
    vector<T> bit; int sz;
public:
    BIT(int n) : sz(n) { bit.resize(n + 1); }
    T sum(int i) { T s = 0; while (i > 0) { s += bit[i]; i -= i & -i; } return s; }
    T sum(int l, int r) { return sum(r) - sum(l - 1); }
    void add(int i, int x) { while (i <= sz) { bit[i] += x; i += i & -i; } }
};
 
int main()
{
    int n;
    ll ans = 0;
    cin >> n;
    vector<int> b(n);
    priority_queue<PII, vector<PII>, greater<PII> > q;
    BIT<int> bit(n+1);
    REP(i, n) {
        cin >> b[i];
        q.push(PII(b[i], i));
        bit.add(i+1, 1);
    }
 
    for (int i = 0; i < n-1; i++) {
        int p = q.top().second;
        q.pop();
        ll l = bit.sum(p+1) - 1;
        ll r = bit.sum(p+1, n) - 1;
        bit.add(p + 1, -1);
        ans += (l > r) ? r : l;
    }
    cout << ans << endl;
    
    return 0;
}