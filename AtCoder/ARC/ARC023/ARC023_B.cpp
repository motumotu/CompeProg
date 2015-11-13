#include <iostream>
#include <cstdio>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
 
#define N 1000
 
using namespace std;
 
int main()
{
  int r, c, d;
  int tmp;
  int max = -1;
 
  scanf("%d %d %d", &r, &c, &d);
 
  for ( int i = 0; i < r; i++ ) {
    for ( int j = 0; j < c; j++ ) {
      scanf("%d", &tmp);
      if ( tmp > max && i+j <= d && d % 2 == (i+j) % 2 ) {
        max = tmp;
      }
    }
  }
  printf("%d\n", max);
 
  return 0;
}