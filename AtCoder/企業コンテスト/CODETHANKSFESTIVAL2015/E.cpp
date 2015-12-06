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
    int q;
    cin >> q;
    string s, t;
    REP(i, q) {
        cin >> s >> t;
        int tf[26] = { 0 };
        REP(j, t.length()) tf[t[j] - 'a'] = 1;
        bool flag = false;
        for (int j = 0, pos = 0; j < s.length(); j++) {
            for (int k = j, pos = 0; k < s.length(); k++) {
                if (s[k] == t[pos]) {
                    pos++;
                    if (pos == t.length()) {
                        flag = true;
                        break;
                    }
                }
                else if (tf[s[k] - 'a']) {
                    pos = 0;
                }
            }
            if (flag) break;
        }

        if (flag) puts("YES");
        else puts("NO");
    }
    return 0;
}
