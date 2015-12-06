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
int arr[101][101];
int main()
{
    int n, m, a, b, c, sum = 0;
    cin >> n;
    vector<int> s(n), s2(n);
    REP(i, n) {
        cin >> s[i];
        s2[i] = s[i];
        arr[i + 1][i + 1] = 1;
        sum += s[i];
    }
    SORT(s2);
    cin >> m;
    REP(i, m) {
        cin >> a >> b >> c;
        if (a == 0) {
            arr[b][c] = 1;
        }
        else {
            if (arr[b][c]) {
                cout << s[c - 1] << " " << s[c - 1] << endl;
            }
            else {
                int ans_min = INT_MAX;
                int ans_max = INT_MIN;
                int ans_sum = 0;
                int cnt = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[b][i + 1] == 0) {
                        ans_min = min(ans_min, s[i]);
                        ans_max = max(ans_max, s[i]);
                        ans_sum += s[i];
                        cnt++;
                    }
                    else {
                        
                    }
                }
                if (ans_sum == ans_max) {
                    cout << ans_min << " " << ans_max << endl;
                }
                else if (ans_sum <= 100) {
                    cout << "0 " << ans_sum << endl;
                }
                else {
                    if (ans_sum - (cnt - 1) * 100 <= 0) {
                        cout << "0 100" << endl;
                    }
                    else {
                        cout << ans_sum - (cnt - 1) * 100 << " 100" << endl;
                    }
                }
                //cout << ans_min << " " << ans_max << endl;
            }
        }
    }
    return 0;
}
