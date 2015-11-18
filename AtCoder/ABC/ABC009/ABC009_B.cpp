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
 
int main()
{
    int m1 = -1, m2 = -1;
    vector<int> a;
    int tmp;
    int n;
 
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        cin >> tmp;
        if ( tmp >= m1 ) { m1 = tmp; }
        a.push_back(tmp);
    }
    for ( int i = 0; i < n; i++ ) {
        if ( m1 != a[i] && a[i] >= m2 ) {
            m2 = a[i];
        }
    }
    cout << m2 << endl;
 
    return 0;
}