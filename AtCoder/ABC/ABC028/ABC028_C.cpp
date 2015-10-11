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
 
int main()
{
    int dp[4][301] = { 1 };
    int t;
    for (int i = 0; i < 5; i++) {
        cin >> t;
        for (int j = 2; j >= 0; j--) {
            for (int k = 200; k >= 0; k--) {
                if (dp[j][k]) dp[j + 1][k + t] = 1;
            }
        }
    }
    int cnt = 0;
    for (int i = 300; i >= 0; i--) {
        if (dp[3][i]) {
            cnt++;
            if (cnt == 3) {
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}