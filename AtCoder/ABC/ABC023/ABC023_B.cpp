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
 
int main()
{
    int n;
    string s, t = "b";
    cin >> n >> s;
    for (int i = 0; i < n / 2; i++) {
        if (i % 3 == 0) {
            t = "a" + t + "c";
        }
        else if (i % 3 == 1) {
            t = "c" + t + "a";
        }
        else {
            t = "b" + t + "b";
        }
    }
    if (s == t) {
        printf("%d\n", n / 2);
    }
    else {
        puts("-1");
    }
    return 0;
}