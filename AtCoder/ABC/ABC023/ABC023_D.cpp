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
ll h[100001];
ll s[100001];
int n;
bool check(ll x)
{
    vector<ll> li;
    for (int i = 0; i < n; i++) {
        if (x - h[i] < 0) return false;
        ll t = (x - h[i]) / s[i];
        li.push_back(t);
    }
    SORT(li);
    for (int i = 0; i < n; i++) {
        if (li[i] < i) return false;
    }
    return true;
}
int main()
{
    cin >> n;
    REP(i, n) cin >> h[i] >> s[i];
    ll ma = (ll)100000 * (ll)1000000000;
    ll mi = 0;
    while (ma - mi > 1LL){
        ll x = (ma + mi) / 2LL;
        if (check(x)) ma = x;
        else mi = x;
    }
    cout << ma << endl;
    
    return 0;
}