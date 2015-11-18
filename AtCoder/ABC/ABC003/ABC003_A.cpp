#include<iostream>
 
using namespace std;
 
int main(void)
{
    int num;
    double sum = 0;
    
    cin >> num;
    
    for ( int i = 0; i < num; i++ ) {
        sum += 10000*(i+1) / (double)num;
    }
    
    cout << sum << endl;
    
    return 0;
}