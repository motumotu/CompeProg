#include <iostream>
#include <cstdio>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
int main(void)
{
  int t, n, m;
  int cnt = 0;
  int b_cnt = 0;
  int a[100];
  int b[100];
 
  cin >> t >> n;
  
  for ( int i = 0; i < n; i++ ) {
    cin >> a[i];
  }
 
  cin >> m;
 
  for ( int i = 0; i < m; i++ ) {
    cin >> b[i];
  }
 
  if ( n < m ) {
    cout << "no" << endl;
    return 0;
  }
 
  for ( int i = 0; i < m; i++ ) {
    for ( int j = b_cnt; j < n; j++ ) {
      b_cnt++;
      if ( a[j] <= b[i] && b[i]-a[j] <= t ) {
        cnt++;
        break;
      }
    }
  }
  if ( cnt == m ) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }
 
  return 0;
}