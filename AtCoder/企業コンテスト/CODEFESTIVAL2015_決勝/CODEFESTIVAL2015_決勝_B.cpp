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
#define MOD 1000000007
#define EPS 1e-7
#define PI  3.14159265358979323846
#define INF 10000000
struct edge { int to; int cost; };
//===================================================
double dp[100001] = { 0, 1, 1, 1, 1, 1, 1 };
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        double next[100001] = { 0 };
        for (int j = 1; j <= 100000; j++) next[j] = 0;
        for (int j = 1; j <= 100000; j++) {
            for (int k = 1; k <= 6; k++) {
                if (j - k >= 1 && dp[j - k]) next[j] += dp[j - k];
            }
        }
        for (int j = 1; j <= 100000; j++) dp[j] = next[j] / 10.0;
    }
    int ans = 1;
    double ans_max = dp[1];
    for (int i = 2; i <= 6 * n; i++) {
        if (dp[i] > ans_max) {
            ans_max = dp[i];
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
} 