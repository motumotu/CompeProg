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
    int n, x, sum = 0, a;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (x >> i & 0x1) {
            sum += a;
        }
    }
    printf("%d\n", sum);
    return 0;
}