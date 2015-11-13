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
 
int main()
{
    int n, a, b, turn = 1;
    cin >> n >> a >> b;
    while (true) {
        if (turn == 1) {
            n -= a;
        }
        else {
            n -= b;
        }
        if (n <= 0) {
            if (turn == 1) {
                puts("Ant");
            }
            else {
                puts("Bug");
            }
            break;
        }
        turn *= -1;
    }
    return 0;
}