#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cstring>
#include <cmath>

using namespace std;

int first_sum(string s){
    return s[0]+s[1]+s[2];
}

int second_sum(string s){
    return s[3]+s[4]+s[5];
}

string inc(string s){
    for(int i = 5; i >= 0; i--){
        if(s[i] < '9'){
            s[i]++;

            break;
        }else{
            s[i] = 0;
            continue;
        }
    }

    return s;
}

string dec(string s){
    for(int i = 5; i >= 0; i--){
        if(s[i] > '0'){
            s[i]--;

            break;
        }else{
            s[i] = 9;
            continue;
        }
    }

    return s;
}

int main(){
    string s;

    cin >> s;

    if(abs(first_sum(s) - second_sum(s)) == 1){
        string s_inc = inc(s);
        string s_dec = dec(s);
        // cout << s_inc << endl;
        if(first_sum(s_inc) == second_sum(s_inc) || first_sum(s_dec) == second_sum(s_dec) ){
            cout << "Yes";
        }else{
            cout << "No";
        }
    }

    return 0;
}
