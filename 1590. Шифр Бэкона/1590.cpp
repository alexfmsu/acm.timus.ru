#include <iostream>
#include <cmath>
#include <cstring>
#include <set>

using namespace std;

int main(){
    string s;

    cin >> s;

    set<string> SET;

    int size = s.length();

    // cout << s.substr(0, 4);        

    for(int i = 0; i < size; i++){
        for(int j = 0; j <= size-i; j++){
            SET.insert(s.substr(i, j));        
            cout << s.substr(i, j) << " ";
        }
    }
    
    cout << SET.size() << endl;
    cout << "123" << endl;
    for(auto k:SET){
        cout << k << endl;
    }

    return 0;
}
