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
 
bool find(int n, int a[3])
{
    return n != a[0] && n != a[1] && n != a[2];
}
 
int main()
{
    int n, cnt, tmp;
    int a[3];
    cin >> n;
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
        if (a[i] == n) {
            cout << "NO" << endl;
            return 0;
        }
    }
    for (cnt = 1; cnt <= 100; cnt++) {
        if (find(n - 3, a) && n-3 >= 0){
            n -= 3;
        }
        else if (find(n - 2, a) && n-2 >= 0) {
            n -= 2;
        }
        else if (find(n - 1, a) && n-1 >= 0) {
            n -= 1;
        }
        else {
            break;
        }
    }
    if ( n == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}