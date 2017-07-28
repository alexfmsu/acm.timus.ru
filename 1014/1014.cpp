#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<int> v;

int prime(int n){
    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0){
            v.push_back(i);

            return n/i;
        }
    }

    v.push_back(n);

    return n;
}

int cnt(int n){
    while(1){
        int p = prime(n);
        if(n == p){
            if(n > 9){
                cout << -1 << endl;
                return 0;
            }

            break;
        }
        else n = p;
    }

    int s = 0;

    if(v.size() == 1){
        cout << v[0] << endl;
    }else{
        for(size_t i = 0; i < v.size(); i++){
            // cout << v[i] << " ";
            s *= 10;
            s+=v[i];
        // 
        }
        cout << s << endl;
    }

    v.resize(0);

    return 0;
}
int main(){
    int n;
    
    cin >> n;
    
    int max = 0;

    for(int i = 0; i < 100; i++){
        cout << i << " ";
        cnt(i);
    }
    // vector<int> v;

    // n = prime(n);
    
    

    // // string s;

    // cout << endl;

    // cout << max << endl;
    
    // cout << (a - w_1) << " " << (b - w_2) << endl;
    
    return 0;
}
