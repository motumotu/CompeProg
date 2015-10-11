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
struct edge { int to; int cost; edge(int to = 0, int cost = 0) :to(to), cost(cost){} };
//================================================================
int b[2][3];
int c[3][2];
int calc(int board[][3])
{
    int sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == -1 || board[i + 1][j] == -1) continue;
            if (board[i][j] == board[i + 1][j]) sum += b[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            if (board[i][j] == -1 || board[i][j + 1] == -1) continue;
            if (board[i][j] == board[i][j + 1]) sum += c[i][j];
        }
    }
    return sum;
}
int solve(int board[][3], int n)
{
    int x, y, sum = -1;
    if (n > 9) return calc(board);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != -1) continue;
            board[i][j] = (n % 2) ? 1 : 0;
            int res = solve(board, n + 1);
            board[i][j] = -1;
            if (sum == -1 || ((n % 2) && res > sum) || (!(n % 2) && res < sum)) {
                sum = res;
                x = i;
                y = j;
            }
        }
    }
    return sum;
}
int main()
{
    int board[3][3], sum = 0;
    REP(i, 3) REP(j, 3) board[i][j] = -1;
    REP(i, 2) REP(j, 3) { cin >> b[i][j]; sum += b[i][j]; }
    REP(i, 3) REP(j, 2) { cin >> c[i][j]; sum += c[i][j]; }
    int res = solve(board, 1);
    printf("%d\n", res);
    printf("%d\n", sum - res);
    return 0;
}