#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;
typedef long long ll;
#define SORT(x) sort((x).begin(), (x).end())
#define RSORT(x) sort((x).begin(), (x).end(), greater<int>() )

int main() {
    int n, h, m, t;
    cin >> n >> h >> m >> t;
    n = (m + h * 60 + t * (n - 1)) % (60 * 24);
    cout << n / 60 << endl;
    cout << n % 60 << endl;
    return 0;
}