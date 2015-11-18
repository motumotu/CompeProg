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
#include <ctime>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> PII;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)
#define CLEAR(d) memset((d), 0, (sizeof((d))))
#define ALL(c) (c).begin(), (c).end()
#define ABS(x) ((x < 0) ? -(x) : (x))
#define SORT(x) sort((x).begin(), (x).end())
#define RSORT(x) sort((x).begin(), (x).end(), greater<int>() )
#define SIZE(a) ((int)((a).size()))
#define MOD 1000000007
#define EPS 1e-10
#define PI  (acos(-1))
#define INF 10000000
struct edge { int to; int cost; };
//===================================================
 
struct Point {
    double x, y;
    Point(double x, double y) : x(x), y(y) {}
    Point operator + (Point p) { return Point(add(x, p.x), add(y, p.y)); }
    Point operator - (Point p) { return Point(add(x, -p.x), add(y, -p.y)); }
    bool operator < (Point p) { return x == p.x ? y < p.y : x < p.x; }
    double add(double a, double b) {
        if (abs(a + b) < EPS * (abs(a) + abs(b))) return 0;
        return a + b;
    }
    double det(Point p) { return add(x * p.y, -y * p.x); }  // ŠOÏ
};
 
int intersected(Point p1, Point p2, Point p3, Point p4) {
    return (p2 - p1).det(p3 - p1) * (p2 - p1).det(p4 - p1) < EPS &&
        (p4 - p3).det(p1 - p3) * (p4 - p3).det(p2 - p3) < EPS;
}
 
int main()
{
    int ax, ay, bx, by, n, x, y, ans = 0;
    cin >> ax >> ay >> bx >> by >> n;
    vector<Point> p;
    REP(i, n) {
        cin >> x >> y;
        p.push_back(Point(x, y));
    }
    Point p1 = Point(ax, ay);
    Point p2 = Point(bx, by);
    for (int i = 0; i < n; i++) {
        if (intersected(p[i], p[(i + 1) % n], p1, p2)) {
            ans++;
        }
    }
    printf("%d\n", ans/2+1);
 
    return 0;
}