#include <cstdio>
using namespace std;
 
int main(void)
{
  int n;
  bool flag = false;
  scanf("%d", &n);
 
  for ( int i = 2; i < n; i++ ) {
    if ( n % i == 0 ) {
      flag = true;
    }
  }
  if ( flag ) {
    puts("NO");
  } else {
    puts("YES");
  }
 
  return 0;
}