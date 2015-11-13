#include <iostream>
#include <cstdio>
#include <vector>
#include <climits>
using namespace std;
 
int main()
{
  int tmp;
  int n, k;
  int cnt = 0;
  int num = 0;
  int before = INT_MAX;
 
  cin >> n >> k;
 
  for ( int i = 0; i < n; i++ ) {
    cin >> tmp;
    if ( tmp > before ) {
      cnt++;
    } else {
      cnt = 0;
    }
    before = tmp;
    if ( cnt >= k-1 ) {
      num++;
    }
  }
 
  cout << num << endl;
 
  return 0;
}