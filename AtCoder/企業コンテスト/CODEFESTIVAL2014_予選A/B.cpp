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
    string a;
    int b;
    cin >> a >> b;
    cout << a[(b - 1) % a.length()] << endl;
    return 0;
}