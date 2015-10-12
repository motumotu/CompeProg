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
class Cdgame
{
public:
    int rescount(vector <int> a, vector <int> b)
    {
        int asum = 0, asize = a.size();
        int bsum = 0, bsize = b.size();
        set<int> s;
        REP(i, asize) asum += a[i];
        REP(i, bsize) bsum += b[i];
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < b.size(); j++) {
                int n1 = asum - a[i] + b[j];
                int n2 = bsum - b[j] + a[i];
                s.insert(n1 * n2);
            }
        }
        return s.size();
    }
};