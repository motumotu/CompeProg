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
    int q, t, x;
    cin >> q;
    BIT<int> bit(200000);
    for (int i = 0; i < q; i++) {
        cin >> t >> x;
        if (t == 1) {
            bit.add(x, 1);
        }
        else if (t == 2) {
            int lb = 0;
            int ub = 200000;
            while (ub - lb > 1) {
                int mid = (lb + ub) / 2;
                if (bit.sum(mid) >= x) {
                    ub = mid;
                }
                else {
                    lb = mid;
                }
            }
            bit.add(ub, -1);
            cout << ub << endl;
        }
    }
    return 0;
}