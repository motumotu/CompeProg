#include <iostream>
#include <cstdio>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
int main(void)
{
  int n;
  int min;
  cin >> n;
  cin >> min;
  for ( int i = 1; i < n; i++ ) {
    int tmp;
    cin >> tmp;
    if ( tmp < min ) {
      min = tmp;
    }
  }
  cout << min << endl;
 
  return 0;
}