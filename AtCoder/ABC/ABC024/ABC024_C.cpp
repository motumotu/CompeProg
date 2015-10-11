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
 
int main()
{
    int n, d, k;
    int left[100], right[100];
    cin >> n >> d >> k;
    vector<int> l(d), r(d);
    for (int i = 0; i < d; i++) {
        cin >> l[i] >> r[i];
    }
    vector<int> s(k), t(k), ans(k);
    for (int i = 0; i < k; i++) ans[i] = 0;
    for (int i = 0; i < k; i++) {
        cin >> s[i] >> t[i];
        left[i] = s[i];
        right[i] = s[i];
    }
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < k; j++) {
            if (l[i] <= left[j] && r[i] >= left[j]) {
                left[j] = l[i];
            }
            if (l[i] <= right[j] && right[j] <= r[i]) {
                right[j] = r[i];
            }
            if (ans[j] == 0 && left[j] <= t[j] && t[j] <= right[j]) {
                ans[j] = i + 1;
            }
        }
    }
    for (int i = 0; i < k; i++) {
        printf("%d\n", ans[i]);
    }
    return 0;
}