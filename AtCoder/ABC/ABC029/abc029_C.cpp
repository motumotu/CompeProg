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
int n;
string s;
void upp(int t)
{
    if (s[t] == 'a') s[t] = 'b';
    else if (s[t] == 'b') s[t] = 'c';
    else if (s[t] == 'c') {
        s[t] = 'a';
        upp(t - 1);
    }
}
 
int main()
{
    cin >> n;
    stringstream ss;
    int mx = 1;
    for (int i = 0; i < n; i++) {
        ss << 'a'; mx *= 3;
    }
    s = ss.str();
    for (int i = 0; i < mx - 1; i++) {
        cout << s << endl;
        upp(n - 1);
    }
    cout << s << endl;
    return 0;
}