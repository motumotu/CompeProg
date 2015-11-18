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
    int sum = 0, n;
    cin >> n;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            sum += i*j;
        }
    }
    sum -= n;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (i*j == sum) {
                printf("%d x %d\n", i, j);
            }
        }
    }
    return 0;
}