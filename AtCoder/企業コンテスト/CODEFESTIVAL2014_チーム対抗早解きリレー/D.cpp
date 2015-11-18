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
#define EPS 1e-5
#define PI  (acos(-1))
#define INF 10000000
struct edge{ int to, cost; };
template<class T> inline std::string toString(T x) { std::ostringstream sout; sout << x; return sout.str(); }
//===================================================
 
int main()
{
    int n, xsum = 0, ysum = 0, flag = 1;
    string b[100];
    cin >> n;
    REP(i, n) cin >> b[i];
    for (int j = 0; j < n; j++) {
        int x = -1, y = -1;
        for (int i = 0; i < n; i++) {
            if (b[i][j] == 'X') x = i;
            if (b[i][j] == 'Y') y = i;
        }
        if (x != -1 && y != -1) {
            xsum += x;
            ysum += n - y - 1;
        }
        else if (x != -1) {
            if (x == 1) {
                xsum += 1;
                ysum += n - 2;
            }
            else if (x == n - 1) {
                xsum += n - 1;
            }
            else {
                flag = 0;
                break;
            }
        }
        else if (y != -1) {
            if (y == n - 2) {
                xsum += n - 2;
                ysum += 1;
            }
            else if (y == 0) {
                ysum += n - 1;
            }
            else {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 0) {
        puts("Impossible");
    }
    else {
        if (xsum == ysum) {
            puts("Impossible");
        }
        else {
            printf("%s\n", (xsum > ysum) ? "X" : "Y");
        }
        
    }
    return 0;
}