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
ll r[100002];
ll c[100002];
ll r2[100002];
ll c2[100002];
ll r3[100002];
ll c3[100002];
int main()
{
    int R, C, K, N;
    ll sum = 0;
    cin >> R >> C >> K >> N;
    REP(i, N) {
        cin >> r[i] >> c[i];
        r2[r[i] - 1]++; c2[c[i] - 1]++;
    }
    REP(i, R) r3[r2[i]]++;
    REP(i, C) c3[c2[i]]++;
    REP(i, K + 1) sum += r3[i] * c3[K - i];
    REP(i, N) {
        if (r2[r[i] - 1] + c2[c[i] - 1] == K) sum--;
        else if (r2[r[i] - 1] + c2[c[i] - 1] == K + 1) sum++;
    }
    cout << sum << endl;
    return 0;
}