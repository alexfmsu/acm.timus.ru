#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(){
    string s1;
    string s2;

    cin >> s1 >> s2;
    
    double d1 = atof(s1.c_str());
    double d2 = atof(s2.c_str());

    double d = atof("0001");


    if(d1 < 10000 && d2 < 10000){
        while(d < max(d1, d2) && d < 9999){
            if(d == d2){
                cout << "yes" << endl;

                return 0;
            }

            d++;

            swap(d1, d2);
        }  
    }
    

    cout << "no" << endl;
    // cout << f << endl;

    return 0;
}
