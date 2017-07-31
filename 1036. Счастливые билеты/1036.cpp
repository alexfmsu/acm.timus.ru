#include <iostream>
#include <cstdlib>
#include <time.h>
#include <unistd.h>

using namespace std;

#define NINE 9

class Arr{
public:
    Arr(int _n){
        n = _n;
        n_2 = n/2;

        sum_1 = sum_2 = 0;

        data = new int[n];
        
        last = n-1;

        for(int i = 0; i < n; i++){
            data[i] = 0;
        }
    }

    void print(){
        for(int i = 0; i < n; i++){
            cout << data[i];
        }

        cout << endl;
    }

    bool inc(){
        for(int i = last; i >= 0; i--){
            if(data[i] != NINE){
                data[i]++;
                
                // sum++;
                
                (i < n_2) ? (sum_1++) : (sum_2++);
                
                return true;
            }else{
                if(i != 0){
                    data[i] = 0;
                    
                    (i < n_2) ? (sum_1-=NINE) : (sum_2-=NINE);
                    
                    continue;
                }else{
                    return false;
                }
            }
        }

        return false;
    }
    
    unsigned int get_sum_1(){
        return sum_1;
    }
    
    unsigned int get_sum_2(){
        return sum_2;
    }
    
    int n_2;
    int* data;
    int n, last;

    unsigned sum_1, sum_2;
};

int main(){
    unsigned int N, SUM;

    cin >> N >> SUM;

    Arr a(N*2);
    
    unsigned int cnt = 0;

    // for(int i = 0; i < 110; i++){
    do{
        unsigned sum_1 = a.get_sum_1();
        unsigned sum_2 = a.get_sum_2();

        // a.print();
        // cout << "sum_1 = " << sum_1 << ", sum_2 = " << sum_2 << ", sum = " << sum << endl;
        if(sum_1 == sum_2 && sum_1 <= SUM){
            // int sum = a.get_sum();
            cnt += ((SUM%2==0) && sum_1 == SUM>>1);
            
        }
        // sleep(1);
        // a.inc();
    }
    while(a.inc());

    cout << cnt << endl;

    return 0;
}