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
 
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (n < 5) {
        cout << n*b << endl;
    }
    else {
        cout << (n - 5)*a + b * 5 << endl;
    }
    return 0;
}