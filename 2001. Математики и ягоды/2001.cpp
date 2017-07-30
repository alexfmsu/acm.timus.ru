#include <iostream>

using namespace std;

int main(){
    int a, b;
    int a_1, b_1;
    int a_2, b_2;
    
    cin >> a >> b;
    cin >> a_1 >> b_1;
    cin >> a_2 >> b_2;
    
    int w_1 = a_2;
    int w_2 = b_1;
    
    cout << (a - w_1) << " " << (b - w_2) << endl;
    
    return 0;
}
