#include <iostream>
#include <iomanip>
#include <cmath>
#include <stack>

using namespace std;

int main(){
    long long x;
    
    stack<long long> st;
    
    while(cin >> x){
        st.push(x);
    }
    
    while(!st.empty()){
        double x = st.top();
        
        cout << fixed << setprecision(4) << sqrt(x) << endl;
        
        st.pop();
    }
    
    return 0;
}
