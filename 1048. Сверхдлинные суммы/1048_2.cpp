#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    
    cin >> n;
    
    int a[n], b[n], c[n*2];
    
    int tmp1, tmp2;
    
    int i_n = n;
    
    for(int i = 0; i < n; i++, i_n++){    
        cin >> tmp1 >> tmp2;
        
        a[i] = tmp1;
        b[i] = tmp2;
        
        c[i] = c[i_n] = 0;
    }
    
    int sum;
    
    for(int i = n-1; i >= 0; i--){
        if(!a[i] && !b[i]){
            continue;
        }
        
        sum = c[n+i];
        
        if(a[i]){
            sum += a[i];
        }
        
        if(b[i]){
            sum += b[i];
        }
        
        if(sum < 10){
            c[n+i] = sum;
        }else{
            c[n+i] = sum % 10;
            
            int ost = sum / 10;
            
            c[n+i-1] += ost;
        }

    }
    
    int _i;

    for(_i = 0; _i < n; _i++){
        if(c[_i] != 0)
            break;
    }
    
    if(_i == n*2){
        cout << 0;
    }else{
        for(int i = _i; i < n*2; i++){
            cout << c[i];
        }
    }

    cout << endl;

    return 0;
}


// 4
// 6 4
// 4 2
// 6 8
// 3 7