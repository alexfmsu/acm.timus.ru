#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

long double fact(int n){
    if(n == 1){
        return 1;
    }else{
        return n * fact(n-1);
    }
}

long double C_n_k(int n, int k){
    return fact(n) / fact(k) / fact(n-k);
}

int main(){
    int N;
    
    cin >> N;
    
    if(N==1){
        cout << 0;
    }else{
        long double sum = (double)fact(N);

        for(int i = 2; i < N; i++){
            sum += fact(i) * C_n_k(N, i);
        }

        cout << fixed << setprecision(0) << sum  << endl;
    }
    return 0;
}
