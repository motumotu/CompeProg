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
    int n, x;
    cin >> n >> x;
    vector<int> w(n);
    map<int, int> num1, num2;
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
    int t = n / 2;
    for (int i = 0; i < (1 << t); i++) {
        int sum = 0;
        for (int j = 0; j < t; j++) {
            if (i >> j & 1) { sum += w[j]; }
        }
        num1[sum]++;
    }
    for (int i = 0; i < (1 << (n-t)); i++) {
        int sum = 0;
        for (int j = 0; j < (n-t); j++) {
            if (i >> j & 1) { sum += w[j+t]; }
        }
        num2[sum]++;
    }
    int ans = 0;
    map<int, int>::iterator it = num1.begin();
    while (it != num1.end())
    {
        ans += num2[x - (*it).first] * (*it).second;
        ++it;
    }
    cout << ans << endl;
    return 0;
}