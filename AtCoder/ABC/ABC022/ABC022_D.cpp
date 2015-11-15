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
#define INF 100000000
struct edge { int to; int cost; };
//===================================================

int main()
{
    int n;
    cin >> n;
    vector<int> ax(n), ay(n), bx(n), by(n);
    double xsum = 0, ysum = 0;
    REP(i, n) {
        cin >> ax[i] >> ay[i];
        xsum += ax[i];
        ysum += ay[i];
    }
    xsum /= n;
    ysum /= n;
    double mxa = 0;
    REP(i, n) {
        double t = sqrt((ax[i] - xsum) * (ax[i] - xsum) + (ay[i] - ysum) * (ay[i] - ysum));
        if (t > mxa) {
            mxa = t;
        }
    }
    // b
    xsum = 0;
    ysum = 0;
    REP(i, n) {
        cin >> bx[i] >> by[i];
        xsum += bx[i];
        ysum += by[i];
    }
    xsum /= n;
    ysum /= n;
    double mxb = 0;
    REP(i, n) {
        double t = sqrt((bx[i] - xsum) * (bx[i] - xsum) + (by[i] - ysum) * (by[i] - ysum));
        if (t > mxb) {
            mxb = t;
        }
    }
    printf("%.10f\n", mxb / mxa);
    return 0;
}