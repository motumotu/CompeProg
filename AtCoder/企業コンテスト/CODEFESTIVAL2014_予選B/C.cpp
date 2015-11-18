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
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)
#define CLEAR(d) memset((d), 0, (sizeof((d))))
#define ALL(c) (c).begin(), (c).end()
#define ABS(x) ((x < 0) ? -x : x)
#define SORT(x) sort((x).begin(), (x).end())
#define RSORT(x) sort((x).begin(), (x).end(), greater<int>() )
#define SIZE(a) ((int)((a).size()))
#define MAX3(a, b, c) (max(max((a), (b)), (c)))
#define MIN3(a, b, c) (min(min((a), (b)), (c)))
#define MOD 1000000007
#define EPS 1e-5
#define PI  (acos(-1))
#define INF 1000000000
//===================================================
 
int main()
{
    string s1, s2, s3;
    int t[26], t2[26], t3[26];
    REP(i, 26) {
        t[i] = 0; t2[i] = 0; t3[i] = 0;
    }
    cin >> s1 >> s2 >> s3;
    for (int i = 0; i < s1.length(); i++) {
        t[s1[i] - 'A']++;
    }
    for (int i = 0; i < s2.length(); i++) {
        t2[s2[i] - 'A']++;
    }
    for (int i = 0; i < s3.length(); i++) {
        t3[s3[i] - 'A']++;
    }
    bool flag = true;
    int n = s3.length() / 2;
    int sum1 = 0, sum2 = 0;
    int m1 = 0, m2 = 0;
    for (int i = 0; i < 26; i++) {
        if (t[i] + t2[i] < t3[i]) {
            flag = false;
            break;
        }
        else {
            sum1 += (t3[i] - t2[i] < 0) ? 0 : t3[i] - t2[i];
            sum2 += (t3[i] - t[i] < 0) ? 0 : t3[i] - t[i];
        }
    }
    if (sum1 > n || sum2 > n) flag = false;
 
    if (flag) {
        puts("YES");
    }
    else {
        puts("NO");
    }
    return 0;
}