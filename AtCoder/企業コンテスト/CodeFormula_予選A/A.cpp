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
    int a;
    bool flag = false;
    cin >> a;
    for (int i = 1; i*i*i <= a; i++)
    {
        if (a == i*i*i) { flag = true; }
    }
    if (flag == false)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}