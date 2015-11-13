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
 
int main()
{
    int na, nb, t, s1 = 0, s2 = 0;
    cin >> na >> nb;
    vector<int> a(na), b(nb);
    REP(i, na) {
        cin >> a[i];
    }
    REP(i, nb) {
        cin >> b[i];
    }
    SORT(a);
    SORT(b);
    int pa = 0, pb = 0;
    while (1) {
        if (a[pa] > b[pb]) {
            s2++;
            pb++;
        }
        else if (a[pa] < b[pb]) {
            s2++;
            pa++;
        }
        else {
            s1++;
            s2++;
            pa++;
            pb++;
        }
        if (pa == na) {
            s2 += nb - pb;
            break;
        }
        if (pb == nb) {
            s2 += na - pa;
            break;
        }
    }
    printf("%.10f\n", (double)s1 / s2);
    return 0;
}