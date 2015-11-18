#include<stdio.h>
 
int main(void)
{
  char board[4][4];
  int i, j;
  for ( i = 0; i < 4; i++ ) {
    for ( j = 0; j < 4; j++ ) {
      do {
        scanf("%c", &board[i][j]);
      } while ( board[i][j] != '.' && board[i][j] != 'o' && board[i][j] != 'x');
    }
  }
  for ( i = 3; i >= 0; i-- ) {
    for ( j = 3; j >= 0; j-- ) {
      printf("%c", board[i][j]);
      if ( j != 0 ) {
        printf(" ");
      }
    }
    puts("");
  }
  return 0;
}