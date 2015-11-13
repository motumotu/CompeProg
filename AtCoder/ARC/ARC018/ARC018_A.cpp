#include <iostream>
#include <cstdio>
#include <vector>
#include <climits>
#include <algorithm>
 
using namespace std;
 
int main()
{
  double height, bmi;
 
  cin >> height >> bmi;
 
  cout << (height * height * bmi) / 10000 << endl;
 
  return 0;
}