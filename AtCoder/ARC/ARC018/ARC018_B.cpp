#include <iostream>
#include <cstdio>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
int main()
{
  int n;
  vector<int> x;
  vector<int> y;
  double area;
  int cnt = 0;
 
  cin >> n;
  for ( int i = 0; i < n; i++ ) {
    int tmp1;
    int tmp2;
    cin >> tmp1 >> tmp2;
    x.push_back(tmp1);
    y.push_back(tmp2);
  }
 
  for ( int i = 0; i < n-2; i++ ) {
    for ( int j = i+1; j < n-1; j++ ) {
      for ( int k = j+1; k < n; k++ ) {
        long a = x[j]-x[i];
        long b = y[j]-y[i];
        long c = x[k]-x[i];
        long d = y[k]-y[i];
        long long area = a*d-b*c;
        if ( area != 0 && area%2 == 0 ) { cnt++; }
      }
    }
  }
 
  cout << cnt << endl;
 
  return 0;
}