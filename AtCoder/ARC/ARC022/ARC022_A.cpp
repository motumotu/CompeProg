#include <iostream>
#include <cstdio>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
 
using namespace std;
 
int main()
{
	char tmp[102];
	int flag = 0;
 
	cin >> tmp;
 
	for (int i = 0;; i++) {
		if (tmp[i] == '\0') { break; }
		switch (flag) {
		case 0:
			if (tmp[i] == 'I' || tmp[i] == 'i') { flag++; }
			break;
		case 1:
			if (tmp[i] == 'C' || tmp[i] == 'c') { flag++; }
			break;
		case 2:
			if (tmp[i] == 'T' || tmp[i] == 't') { flag++; }
			break;
		}
	}
 
	if (flag == 3) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
 
	return 0;
}