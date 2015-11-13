#include <iostream>
#include <cstdio>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <string>
 
using namespace std;
 
typedef long long ll;
 
bool checkColor(int color[], int n)
{
    int co = color[0];
 
    for ( int i = 1; i < n; i++ ) {
        if ( color[i] != co ) {
            return false;
        }
    }
    return true;
}
 
int main()
{
    int n;
    int color[100000];
    int cnt = 1;
    int now = 0;
    int co = -1;
 
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        cin >> color[i];
    }
    
    if ( checkColor(color, n) ) {
        cnt = -1;
    } else {
        for ( int i = 0; i < n*2; i++ ) {
            if ( color[i%n] == co ) {
                now++;
                if ( now >= cnt ) {
                    cnt = now;
                }
            } else {
                now = 1;
                co = color[i%n];
            }
        }
    }
    if ( cnt != -1 ) {
        cnt = (cnt-1)/2+1;
    }
    cout << cnt << endl;
 
    return 0;
}