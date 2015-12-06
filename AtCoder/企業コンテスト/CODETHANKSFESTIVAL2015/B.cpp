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
int use[1001];
int main()
{
    int a1, a2, b1, b2, c;
    cin >> a1 >> a2 >> b1 >> b2 >> c;
    vector<int> ans;
    if (a1 == c || a2 == c) {
        ans.push_back(b1);
        use[b1] = 1;
        if (use[b2] == 0) {
            ans.push_back(b2);
            use[b2] = 1;
        }
    }
    if (b1 == c || b2 == c) {
        if (use[a1] == 0) {
            ans.push_back(a1);
            use[a1] = 1;
        }
        if (use[a2] == 0) {
            ans.push_back(a2);
            use[a2] = 1;
        }
    }
    int n = ans.size();
    cout << n << endl;
    SORT(ans);
    for (int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}