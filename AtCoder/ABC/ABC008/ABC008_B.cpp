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
    map<string, int> m;
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (m.find(s) == m.end()) {
            m[s] = 0;
        }
        else {
            m[s]++;
        }
    }
    int max = -1;
    string name;
    for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
        if (it->second > max) {
            max = it->second;
            name = it->first;
        }
    }
    cout << name << endl;
 
    return 0;
}