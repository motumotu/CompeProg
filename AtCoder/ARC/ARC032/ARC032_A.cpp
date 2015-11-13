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
#include <cctype>
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
vector<int> sieveOfEratosthenes(int n) {
    vector<int> arr(n + 1), prime;
    for (int i = 2; i <= n; i++) arr[i] = 1;
    for (int i = 2; i*i < n; i++) if (arr[i])
    for (int j = i * i; j < n; j += i) arr[j] = 0;
    return arr;
}
 
int main()
{
    int n;
    vector<int> p = sieveOfEratosthenes(1000000);
    cin >> n;
    cout << ((p[n*(n + 1) / 2]) ? "WANWAN" : "BOWWOW") << endl;
    return 0;
}