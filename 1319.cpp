#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    int x[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            x[i][j] = 0;
        }
    }

    int i_0 = 0;
    int j_0 = n-1;

    int v = 1;

    for(int i = 0; i < n; i++){
        for(int k = 0; k <= i; k++){
            // cout << i_0+k << "," << j_0+k << " = " << i << endl;
            x[i_0+k][j_0+k] = v++;
        }

        i_0 = 0;
        j_0--;
    }

    i_0 = 1;
    j_0 = 0;
    
    for(int i = n-1; i >= 1; i--){
        for(int k = 0; k < i; k++){
            // cout << i_0+k << "," << j_0+k << " = " << v << endl;
            x[i_0+k][j_0+k] = v++;
        }

        i_0++;
        j_0 = 0;
    }

    // cout << endl;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << x[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}

