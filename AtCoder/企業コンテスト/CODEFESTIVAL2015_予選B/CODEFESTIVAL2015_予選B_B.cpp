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

int main() {
    int n, m;
    cin >> n >> m;
    map<int,int> sum;
    REP(i, n) {
        int a;
        cin >> a;
        sum[a]++;
    }
    bool flag = true;
    int mx = 0;
    int mxp = 0;
    for (map<int, int>::iterator it = sum.begin(); it != sum.end(); ++it) {
        int first = (*it).first;
        int second = (*it).second;
        if (second > mx) {
            mx = second;
            mxp = first;
            flag = true;
        }
        else if (second == mx) {
            flag = false;
        }
    }
    if (flag && mx > n / 2) cout << mxp << endl;
    else cout << "?" << endl;
    return 0;
}