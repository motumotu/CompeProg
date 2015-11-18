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
 
double calc(int ax, int ay, int bx, int by)
{
    return sqrt((double)(ax-bx)*(ax-bx)+(ay-by)*(ay-by));
}
 
int main()
{
    int txa, tya, txb, tyb, t, v, n;
    int x, y;
    bool flag = false;
    double de;
 
    cin >> txa >> tya >> txb >> tyb >> t >> v >> n;
    de = sqrt((double)(t*v)*(t*v));
    for ( int i = 0; i < n; i++ ) {
        cin >> x >> y;
        if ( calc(txa, tya, x, y) + calc(x, y, txb, tyb) <= de ) {
            flag = true;
        }
    }
    if ( flag == true ) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}