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
#define ALL(c) (c).begin(), (c).end()
#define MOD 1000000007
#define EPS 1e-5
 
 
 
int main()
{
    int a, b;
    cin >> a >> b;
    int asum = 0;
    a--;
    asum += a / 4;
    asum -= a / 100;
    asum += a / 400;
    int bsum = 0;
    bsum += b / 4;
    bsum -= b / 100;
    bsum += b / 400;
    cout << bsum - asum << endl;
    return 0;
}