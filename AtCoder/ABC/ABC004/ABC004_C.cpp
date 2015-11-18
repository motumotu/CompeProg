#include<stdio.h>
 
int main(void)
{
  int i;
  int n;
  int tmp;
  int card[6];
 
  for ( i = 0; i < 6; i++ ) {
    card[i] = i+1;
  }
 
  scanf("%d", &n);
  n = n%30;
 
  for ( i = 0; i < n; i++ ) {
    tmp = card[i%5];
    card[i%5] = card[i%5+1];
    card[i%5+1] = tmp;
  }
 
  for ( i = 0; i < 6; i++ ) {
    printf("%d", card[i]);
  }
  puts("");
 
  return 0;
}