#include <iostream>
#include <cstdio>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
int main(void)
{
  char num[9];
  int i = 0;
  scanf("%s", &num);
  while(num[i] != '\0' ){
    if ( num[i] == 'O' ) {
      printf("0");
    } else if ( num[i] == 'D' ) {
      printf("0");
    } else if ( num[i] == 'I' ) {
      printf("1");
    } else if ( num[i] == 'Z' ) {
      printf("2");
    } else if ( num[i] == 'S' ) {
      printf("5");
    } else if ( num[i] == 'B' ) {
      printf("8");
    } else {
      printf("%c",num[i]);
    }
    i++;
  }
  puts("");
 
  return 0;
}