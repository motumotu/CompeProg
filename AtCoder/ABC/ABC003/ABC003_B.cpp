#include<iostream>
#include<string>
 
using namespace std;
 
int main(void)
{
    string s, t;
    string tmp = "atcoder";
    int flag = 0;
    int i, j;
    
    cin >> s >> t;
    
    for ( i = 0; i < s.size(); i++ ) {
        if ( s[i] == t[i] ) { flag++; continue; }
        if ( s[i] == '@' && t[i] == '@' ) { flag++; continue; }
        if ( s[i] == '@' ) {
            for ( j = 0; j < tmp.size(); j++ ) {
                if ( tmp[j] == t[i] ) {
                    flag++;
                    break;
                }
            }
        }
        if ( t[i] == '@' ) {
            for ( j = 0; j < tmp.size(); j++ ) {
                if ( tmp[j] == s[i] ) {
                    flag++;
                    break;
                }
            }
        }
    }
    
    if ( flag == s.size() ) {
        cout << "You can win" << endl;
    } else {
        cout << "You will lose" << endl;
    }
 
    return 0;
}