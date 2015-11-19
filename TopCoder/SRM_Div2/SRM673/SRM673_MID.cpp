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

class BearSlowlySorts
{
public:
    int minMoves(vector <int> w)
    {
        int w_max = w[0];
        int w_min = w[0];
        vector<int> arr(w.size());
        arr[0] = w[0];
        for (int i = 1; i < w.size(); i++) {
            w_max = max(w_max, w[i]);
            w_min = min(w_min, w[i]);
            arr[i] = w[i];
        }
        SORT(arr);
        // 0
        bool flag = true;
        for (int i = 0; i < w.size(); i++) {
            if (arr[i] != w[i]) { flag = false; break; }
        }
        if (flag) {
            return 0;
        }
        // 3
        if (w[0] == w_max && w[w.size() - 1] == w_min) {
            return 3;
        }
        // 1
        if (w[0] == w_min || w[w.size() - 1] == w_max) {
            return 1;
        }
        // 2
        return 2;
    }
};