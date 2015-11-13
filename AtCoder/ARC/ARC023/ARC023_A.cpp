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
  int y, m , d;
  int day = 0;
 
  scanf("%d %d %d", &y, &m, &d);
 
  if ( m == 1 || m == 2 ) { y -= 1; m += 12; }
 
  day = 365*y + (y/4) - (y/100) + (y/400) + (306*(m+1)/10) + d - 429;
 
  printf("%d\n", 735369 - day);
 
  return 0;
}