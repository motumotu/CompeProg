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
void solve();
void init()
{
    srand((unsigned int)time(NULL));
}
int main()
{
    init();
    solve();
    return 0;
}
//================================================================
 
void solve()
{
    string s;
    cin >> s;
    VI ans;
    int now = 0;
    int m_sum = 0;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == '+') now++;
        else if (s[i] == '-') now--;
        else {
            m_sum++;
            ans.push_back(now);
        }
    }
    SORT(ans);
    int sum = 0;
    for (int i = 0; i < ans.size(); i++) {
        if (i < m_sum / 2) sum -= ans[i];
        else sum += ans[i];
    }
    cout << sum << endl;
}