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
#define MOD 1000003
#define EPS 1e-7
#define PI  (acos(-1))
#define INF 10000000
struct edge { int to; int cost; };
//===================================================
 
int dx[] = { 1, -1, 0, 0 };
int dy[] = { 0, 0, 1, -1 };
int sum;
int check(int s[][10], int x, int y)
{
    int f = 0;
    s[y][x] = 0;
    if (sum == 0) return 1;
    for (int i = 0; i < 4; i++) {
        int px = x + dx[i];
        int py = y + dy[i];
        if (px < 0 || px >= 10 || py < 0 || py >= 10) continue;
        if (s[py][px] == 0) continue;
        sum--;
        f += check(s, px, py);
    }
    return f;
}
 
int main()
{
    string s;
    int m[10][10];
    int c[10][10];
    int t = 0;
    int a = 0;
    for (int i = 0; i < 10; i++) {
        cin >> s;
        for (int j = 0; j < 10; j++) {
            if (s[j] == 'o') {
                sum++;
                m[i][j] = 1;
            }
            else {
                m[i][j] = 0;
            }
        }
    }
    t = sum;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (m[i][j] != 0) continue;
            REP(z, 10)REP(y,10) c[z][y] = m[z][y];
            sum = t;
            if (check(c, j, i)) {
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
    return 0;
}