#include <iostream>
#include <cstdio>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <string>
#include <map>
#include <sstream>
 
using namespace std;
 
typedef long long ll;
 
int main()
{
    int n, tmp;
    int cnt = 0;
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        cin >> tmp;
        if ( tmp % 2 == 0 ) {
            cnt++;
        }
        if ( tmp == 5 || tmp == 6 ) {
            cnt += 2;
        }
    }
    cout << cnt << endl;
 
    return 0;
}