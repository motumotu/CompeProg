#include <iostream>
#include <cstdio>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <cstdlib>
 
using namespace std;
 
int main()
{
  int a;
  int b;
  
  cin >> a >> b;
 
  a = abs(a);
  b = abs(b);
 
  if ( a - b == 0 ) {
    cout << "Draw" << endl;
  } else if ( a < b ) {
    cout << "Ant" << endl;
  } else if ( a > b ) {
    cout << "Bug" << endl;
  }
 
  return 0;
}