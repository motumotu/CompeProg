#include<iostream>
#include<string>
 
using namespace std;
 
int main(void)
{
    int n, k;
    int r[4000];
    double rate = 0;
    
    cin >> n >> k;
    
    for ( int i = 0; i < n; i++ ) {
        cin >> r[i];
    }
    
    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < n-i-1; j++ ) {
            if ( r[j] > r[j+1] ) {
                int tmp = r[j+1];
                r[j+1] = r[j];
                r[j] = tmp;
            }
        }
    }
    
    for ( int i = n-k; i < n; i++ ) {
        rate = (rate+r[i])/2.0;
    }
    
    cout << fixed << rate << endl;
            
    return 0;
}