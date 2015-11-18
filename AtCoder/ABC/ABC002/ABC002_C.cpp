#include <stdio.h>
#include <math.h>
 
int main(void)
{
  int x[3], y[3];
  int i;
  double sum;
 
  for ( i = 0; i < 3; i++ ) {
    scanf("%d %d", &x[i], &y[i]);
  }
 
  sum = abs(x[0]*(y[1]-y[2])+x[1]*(y[2]-y[0])+x[2]*(y[0]-y[1]));
  sum /= 2;
 
  printf("%lf\n", sum);
 
  return 0;
}