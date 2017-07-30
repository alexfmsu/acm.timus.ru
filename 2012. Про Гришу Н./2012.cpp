#include <iostream>

using namespace std;

int main(){
    int f;
    
    cin >> f;
    
    if((12-f) * 0.75 <= 4){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    return 0;
}
