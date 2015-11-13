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
//===================================================
int isPrime(int x)
{
    if (x == 2) return 1;
    if (x < 2 || x % 2 == 0) return 0;
    for (int i = 3; i * i <= x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}
 
int main()
{
    int n;
    cin >> n;
    // ëfêî
    if (isPrime(n)) {
        puts("Prime");
    } else {
        int t = n % 10;
        if (t % 2 == 1 && t != 5 && n % 3 != 0 && n != 1) {
            puts("Prime");
        } else {
            puts("Not Prime");
        }
    }
    return 0;
}