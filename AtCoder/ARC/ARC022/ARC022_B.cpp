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
 
bool use[100000];
 
int main()
{
	int n, a, ma = 0;
	queue<int> que;
	for (int i = 0; i < 100000; i++) use[i] = false;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		while (use[a] == true) {
			use[que.front()] = false;
			que.pop();
		}
		que.push(a);
		use[a] = true;
		ma = max(ma, (int)que.size());
	}
	cout << ma << endl;
	return 0;
}