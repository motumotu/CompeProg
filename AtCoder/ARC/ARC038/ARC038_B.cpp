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
//================================================================
char s[101][101];
int dp[100][100];
 
int judge(int i, int j) {
    if (s[i][j] == '#') {
        return 1;
    }
    if (s[i + 1][j] == '#' && s[i][j + 1] == '#' && s[i + 1][j + 1] == '#') {
        dp[i][j] = 0;
        return 0;
    }
    if (dp[i][j] != -1) return dp[i][j];
 
    int flag = 0;
    if (judge(i + 1, j) == 0) flag = 1;
    else if (judge(i, j + 1) == 0) flag = 1;
    else if (judge(i + 1, j + 1) == 0) flag = 1;
    dp[i][j] = flag;
    return flag;
}
 
int main()
{
    int h, w;
    string t;
    cin >> h >> w;
    for (int i = 0; i < h; i++) {
        cin >> t;
        for (int j = 0; j < w; j++) {
            s[i][j] = t[j];
            s[i][j + 1] = '#';
            s[i + 1][j] = '#';
            s[i + 1][j + 1] = '#';
            dp[i][j] = -1;
        }
    }
    cout << (judge(0, 0) ? "First" : "Second") << endl;
    return 0;
}