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
    string n;
    int sum1 = 0, sum2 = 0;
    cin >> n;
    for (int i = n.length()-1; i >= 0; i--)
    {
        if ((n.length()-1-i) % 2 == 0)
        {
            sum1 += n[i] - '0';
        }
        else
        {
            sum2 += n[i] - '0';
        }
    }
    cout << sum2 << " " << sum1 << endl;
    return 0;
}