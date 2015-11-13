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
 
using namespace std;
 
typedef long long ll;
 
int main()
{
    int left[50];
    int right[50];
    int l, r;
    int tmp;
    int sum = 0;
 
    for ( int i = 0; i < 50; i++ ) {
        left[i] = 0;
        right[i] = 0;
    }
 
    cin >> l >> r;
    for ( int i = 0; i < l; i++ ) {
        cin >> tmp;
        left[tmp]++;
    }
    for ( int i = 0; i < r; i++ ) {
        cin >> tmp;
        right[tmp]++;
    }
    for ( int i = 0; i < 50; i++ ) {
        sum += min(left[i], right[i]);
    }
 
    cout << sum << endl;
 
    return 0;
}