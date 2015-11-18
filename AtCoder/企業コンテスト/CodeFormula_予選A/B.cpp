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
    int a, b, tmp;
    int dat[10] = { 0 };
    char str[] = "x.o";
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        cin >> tmp;
        dat[tmp] = 1;
    }
    for (int i = 0; i < b; i++)
    {
        cin >> tmp;
        dat[tmp] = 2;
    }
    printf("%c %c %c %c\n", str[dat[7]], str[dat[8]], str[dat[9]], str[dat[0]]);
    printf(" %c %c %c\n", str[dat[4]], str[dat[5]], str[dat[6]]);
    printf("  %c %c\n", str[dat[2]], str[dat[3]]);
    printf("   %c\n", str[dat[1]]);
    return 0;
}