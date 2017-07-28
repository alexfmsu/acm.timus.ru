#include <iostream>

using namespace std;

int main(){
    int n;
    
    cin >> n;
    
    int sum = n;
    
    int d_i = (n > 0) ? 1: -1;
    
    for(int i = 1; i != n; i += d_i){
        sum += i;
    }
    
    cout << sum << endl;
    
    return 0;
}
