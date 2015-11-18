#include <iostream>
#include <cstdio>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
 
using namespace std;
 
int main()
{
  int a[3] = {0, 0, 1};
  int n;
  int ans;
  cin >> n;
  for ( int i = 3; i < n; i++ ) {
    ans = ( a[0] + a[1] + a[2] ) % 10007;
    a[0] = a[1];
    a[1] = a[2];
    a[2] = ans;
  }
  if ( n <= 3 ) {
    cout << a[n-1] << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}