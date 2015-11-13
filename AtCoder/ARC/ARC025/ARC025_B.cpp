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
	int h, w, ma = 0;
	int c[101][101];
	memset(c, 0, sizeof(c));
	cin >> h >> w;
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			cin >> c[i][j];
			if ((i + j) & 1) c[i][j] *= -1;
		}
	}
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			c[i][j] += c[i][j - 1] + c[i - 1][j] - c[i - 1][j - 1];
		}
	}
	int ans = 0;
	for (int i = 1; i <= h; i++) {
		for (int i2 = i; i2 <= h; i2++) {
			for (int j = 1; j <= w; j++) {
				for (int j2 = j; j2 <= w; j2++) {
					if (c[i2][j2] - c[i-1][j2] - c[i2][j-1] + c[i-1][j-1] == 0) {
						ans = max(ans, (i2 - i + 1)*(j2 - j + 1));
					}
				}
			}
		}
	}
	/*
	for (int i = 0; i <= h; i++) {
		for (int j = 0; j <= w; j++) {
			printf("%3d ", c[i][j]);
		}
		puts("");
	}
	*/
	cout << ans << endl;
	return 0;
}