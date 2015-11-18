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
#define MOD 1000000007
#define EPS 1e-5
#define MIN(x,a) x=min(x,a)
#define MAX(x,a) x=max(x,a)
 
int dx[] = { 1, -1, 0, 0 };
int dy[] = { 0, 0, 1, -1 };
 
int main()
{
    int r, c, sy, sx, gy, gx;
    int dat[50][50];
    char tmp;
    int cost = 1;
    queue<int> qx, qy;
    cin >> r >> c >> sy >> sx >> gy >> gx;
    sy--; sx--; gx--; gy--;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> tmp;
            dat[i][j] = (tmp == '.') ? -1 : -2;
        }
    }
    dat[sy][sx] = 0;
    qx.push(sx);
    qy.push(sy);
    while (!qx.empty()) {
        cost = dat[qy.front()][qx.front()] + 1;
        for (int k = 0; k < 4; k++) {
            int px = qx.front() + dx[k];
            int py = qy.front() + dy[k];
            if (dat[py][px] == -1) {
                dat[py][px] = cost;
                qx.push(px);
                qy.push(py);
            }
        }
        qx.pop();
        qy.pop();
    }
    cout << dat[gy][gx] << endl;
    return 0;
}