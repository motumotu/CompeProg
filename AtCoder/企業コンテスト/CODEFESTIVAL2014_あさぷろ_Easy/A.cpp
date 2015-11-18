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
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)
#define CLEAR(d) memset((d), 0, (sizeof((d))))
#define ALL(c) (c).begin(), (c).end()
#define ABS(x) ((x < 0) ? -(x) : (x))
#define SORT(x) sort((x).begin(), (x).end())
#define RSORT(x) sort((x).begin(), (x).end(), greater<int>() )
#define SIZE(a) ((int)((a).size()))
#define MAX3(a, b, c) (max(max((a), (b)), (c)))
#define MIN3(a, b, c) (min(min((a), (b)), (c)))
#define MOD 1000000007
#define EPS 1e-5
#define PI  (acos(-1))
#define INF 10000000
template<class T> inline std::string toString(T x) { std::ostringstream sout; sout << x; return sout.str(); }
//===================================================
 
int main()
{
    int n, a, pa, sum = 0;
    cin >> n;
    REP(i, n) {
        cin >> a;
        if (i == 0) {
            pa = a;
            continue;
        }
        sum += a - pa;
        pa = a;
    }
    printf("%f\n", (double)sum / (n - 1));
    return 0;
}