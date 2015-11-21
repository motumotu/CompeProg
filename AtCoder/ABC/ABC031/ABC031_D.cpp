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
struct pi {
    string v;
    string w;
};
int k, n;
string v, w;
vector<pi> vw;
int len[10] = { 0 };
bool flag = false;
string ans[10];
 
void check()
{
    for (int i = 1; i <= k; i++) ans[i] = "";
 
    for (int i = 0; i < n; i++) {
        int pos = 0;
        for (int j = 0; j < vw[i].v.length(); j++) {
            int l = len[vw[i].v[j] - '0'];
            if (pos + l > vw[i].w.length()) return;
            string str = vw[i].w.substr(pos, l);
            pos += l;
            if (ans[vw[i].v[j] - '0'] == "") {
                ans[vw[i].v[j] - '0'] = str;
            }
            else {
                if (ans[vw[i].v[j] - '0'] != str) return;
            }
        }
        if (pos != vw[i].w.length()) return;
    }
    for (int l = 1; l <= k; l++) {
        cout << ans[l] << endl;
    }
    flag = true;
}
 
void dfs(int n)
{
    for (int i = 1; i <= 3; i++) {
        len[n] = i;
        if (n < k) dfs(n + 1);
        if (n == k) check();
        if (flag) break;
    }
}
 
int main()
{
    cin >> k >> n;
    REP(i, n) {
        cin >> v >> w;
        vw.push_back(pi{ v, w });
    }
    dfs(1);
    return 0;
}