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
	int d[7], j;
	int sum = 0;
	for (int i = 0; i < 7; i++) {
		cin >> d[i];
	}
	for (int i = 0; i < 7; i++) {
		cin >> j;
		sum += max(d[i], j);
	}
	cout << sum << endl;
	return 0;
}