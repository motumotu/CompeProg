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
int dp[51] = { 0 };
 
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    REP(i, n) {
        cin >> a[i];
    }
 
    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        int takahashi_point = 0;
        int aoki_max = INT_MIN;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            int takahashi = 0;
            int aoki = 0;
            for (int k = min(i, j), t = 0; k <= max(i, j); k++, t++) {
                if (t % 2 == 0) {
                    takahashi += a[k];
                }
                else {
                    aoki += a[k];
                }
            }
            if (aoki > aoki_max) {
                aoki_max = aoki;
                takahashi_point = takahashi;
            }
        }
        if (takahashi_point > ans) {
            ans = takahashi_point;
        }
    }
    cout << ans << endl;
    return 0;
}