#include <iostream>

using namespace std;

int main(){
    int N;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        char a;
        
        int b;
        
        cin >> a >> b;

        int y1 = (a - 2 >= 'a') &&  (b+1 <= 8);
        int y2 = (a - 2 >= 'a') &&  (b-1 >= 1);
        
        int y3 = (a + 2 <= 'h') &&  (b+1 <= 8);
        int y4 = (a + 2 <= 'h') &&  (b-1 >= 1);
        
        int x1 = (a - 1 >= 'a') &&  (b+2 <= 8);
        int x2 = (a - 1 >= 'a') &&  (b-2 >= 1);
        
        int x3 = (a + 1 <= 'h') &&  (b+2 <= 8);
        int x4 = (a + 1 <= 'h') &&  (b-2 >= 1);
        
        // cout << a - 'a' + 2;
        cout << x1+x2+x3+x4+y1+y2+y3+y4 << endl;
    }
    
    return 0;
}
