#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define SORT(x) sort((x).begin(), (x).end())
#define RSORT(x) sort((x).begin(), (x).end(), greater<int>() )

int main() {
    ll n;
    cin >> n;
    cout << 316 + (n - 1) * 52 << endl;
    return 0;
}