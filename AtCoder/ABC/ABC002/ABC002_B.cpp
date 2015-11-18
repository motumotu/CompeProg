#include <stdio.h>
 
int main(void)
{
  int i, j;
  char w[31];
 
  scanf("%s", w);
  
  for ( i = 0; i < 31; i++ ) {
    if ( w[i] != 'a' && w[i] != 'i' && w[i] != 'u' && w[i] != 'e' && w[i] != 'o' ) {
      if ( w[i] == '\0' ) { break; }
      printf("%c", w[i]);
    }
  }
  puts("");
 
  return 0;
}