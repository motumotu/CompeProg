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
vector<int> primeFactorization(ll n)
{
    vector<int> p;
    ll a = 2;
    while (n >= a * a) {
        if (n % a == 0) {
            p.push_back(a);
            n /= a;
        }
        else {
            a++;
        }
    }
    p.push_back(n);
    return p;
}
int main() {
    ll x, y = 1;
    cin >> x;
    vector<int> p = primeFactorization(x);
    map<int, int> m;
    for (int i = 0; i < p.size(); i++) {
        m[p[i]]++;
    }
    for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it) {
        if ((*it).second % 2 == 1) y *= (*it).first;
    }
    cout << y << endl;
    return 0;
}