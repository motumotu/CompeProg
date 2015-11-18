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
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.size(); i++) {
        s[i] = towlower(s[i]);
    }
    cout << s << endl;
    return 0;
}