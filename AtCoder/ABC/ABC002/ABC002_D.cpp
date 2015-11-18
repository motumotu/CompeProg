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
 
int solve(int dat[][13], int n, int use[])
{
    int cnt = 0;
    for (int i = 1; i <= 12; i++) {
        bool flag = true;
        for (int j = 1; j <= 12; j++) {
            if (i == j) continue;
            if (use[j] == 1 && dat[i][j] == 0) {
                flag = false;
                break;
            }
        }
        if (use[i] == 0 && flag) {
            cnt++;
            use[i] = 1;
            cnt += solve(dat, i, use);
        }
    }
    return cnt;
}
 
int main()
{
    int n, m, x, y;
    cin >> n >> m;
    int dat[13][13];
    memset(dat, 0, sizeof(dat));
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        dat[x][y] = dat[y][x] = 1;
    }
    int ans = -1;
    for (int i = 1; i <= 12; i++) {
        int use[13] = { 0 };
        use[i] = 1;
        ans = max(ans, solve(dat, i, use)+1);
    }
    cout << ans << endl;
 
    return 0;
}