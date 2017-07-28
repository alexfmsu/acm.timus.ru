#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int a, b, c;
    
    cin >> a >> b >> c;
    vector<int> v;

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    sort(v.begin(), v.end());
    
    cout << v[0]-v[1]*v[2] << endl;
    // int max = max(a, b);

    // if(max == a){

    // }
    // cin >> N >> M;
    
    // cout << N * (M+1) << endl;
    
    return 0;
}
