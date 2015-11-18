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
 
#define MAX 1000001
 
vector<int> dat(MAX);
 
int main()
{
    int n, a, b, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        dat[a]++;
        if (b + 1 < MAX) {
            dat[b + 1]--;
        }
    }
    for (int i = 0; i < MAX; i++) {
        if (i == 0) {
            m = dat[0];
            continue;
        }
        dat[i] += dat[i - 1];
        m = max(dat[i], m);
    }
    printf("%d\n", m);
    return 0;
}