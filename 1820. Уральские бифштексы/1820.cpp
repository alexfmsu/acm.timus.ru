#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, k;
    
    cin >> n >> k;
    
    if(n < k){
        cout << 2 << endl;
    }else{
        cout << ceil((n * 2) / (k + .0)) << endl;
    }
    
    return 0;
}
