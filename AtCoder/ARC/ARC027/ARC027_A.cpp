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
#define MOD 1000000007
#define EPS 1e-5
 
int main()
{
    int h, m;
    cin >> h >> m;
    printf("%d\n", (17 - h) * 60 + 60 - m);
    return 0;
}