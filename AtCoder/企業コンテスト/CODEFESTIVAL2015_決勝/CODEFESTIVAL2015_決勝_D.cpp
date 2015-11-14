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
int dp[100002] = { 0 };
int main() {
    int n;
    cin >> n;
    vector<int> s(n), t(n);
    REP(i, n) {
        cin >> s[i] >> t[i];
        dp[s[i]]++;
        dp[t[i]]--;
    }
    int mx = 0;
    int mxpl = 0;
    int mxpr = 0;
    for (int i = 1; i <= 100000; i++) {
        dp[i] += dp[i - 1];
        //if (i <= 5) cout << i << " " << dp[i] << endl;
        if (dp[i] > mx) {
            mx = dp[i];
            mxpl = i;
            mxpr = i;
        }
        else if (dp[i] > 0 && dp[i] == mx) {
            mxpr = i;
        }
    }
    //cout << mxpl << " a " << mxpr << endl;
    for (int k = 0; k < n; k++) {
        if (s[k] <= mxpl && t[k] - 1 >= mxpr) {
            mx--;
            break;
        }
    }
    cout << mx << endl;
    return 0;
}