#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <string>
#include <map>
#include <set>
#include <sstream>
#include <functional>
using namespace std;
typedef long long ll;
 
int main()
{
    int s, m, z;
    cin >> s;
    m = s / 3600;
    s -= m * 3600;
    z = s / 60;
    s -= z * 60;
    printf("%02d:%02d:%02d\n", m, z, s);
    return 0;
}