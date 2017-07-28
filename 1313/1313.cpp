#include <iostream>

using namespace std;

int main(){
    int N;
    
    cin >> N;
    
    int x[N][N];
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> x[i][j];
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int k = 0; k <= i; k++){
            cout << x[i-k][k] << " ";
        }
    }
    
    for(int j = 1; j < N; j++){
        for(int k = 0; k <= N-1-j; k++){
            cout << x[N-1-k][j+k] << " ";
        }
    }
    
    cout << endl;
    
    return 0;
}
