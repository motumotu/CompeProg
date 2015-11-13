#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
 
int main() {
    int n, i;
    double MT, mT;
    int a[6] = {0};
 
    scanf("%d", &n);
    for ( i = 0; i < n; i++ ) {
        scanf("%lf %lf", &MT, &mT);
 
        if ( MT >= 35 ) {
            a[0]++;
        }
        if ( MT >= 30 && MT < 35 ) {
            a[1]++;
        }
        if ( MT >= 25 && MT < 30 ) {
            a[2]++;
        }
        if ( mT >= 25 ) {
            a[3]++;
        }
        if ( mT < 0 && MT >= 0 ) {
            a[4]++;
        }
        if ( MT < 0 ) {
            a[5]++;
        }
    }
    printf("%d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5] );
 
    return 0;
}