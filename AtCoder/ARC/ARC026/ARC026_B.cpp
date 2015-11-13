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
    ll n, sum = 0;
    vector<ll> s;
    cin >> n;
    for (ll i = 1; i*i <= n; i++) {
        if (i != n && n%i == 0) {
            //printf("%d\n", i);
            sum += i;
            if (n/i != n && i != n / i) {
                //printf("%d\n", n / i);
                sum += n / i;;
            }
        }
    }
    if (n == sum) {
        puts("Perfect");
    }
    else if (n > sum) {
        puts("Deficient");
    }
    else{
        puts("Abundant");
    }
    return 0;
}