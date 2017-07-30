#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v1;
    vector<int> v2;
    vector<int> v;

    int n;

    cin >> n;
    for(int i = 0; i < n; i++){
        int tmp;

        cin >> tmp;

        v1.push_back(tmp);
    }

    cin >> n;
    for(int i = 0; i < n; i++){
        int tmp;

        cin >> tmp;

        v2.push_back(tmp);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    std::set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), std::back_inserter(v));

    v1 = v;
    v2.resize(0);
    v.resize(0);

    cin >> n;
    for(int i = 0; i < n; i++){
        int tmp;

        cin >> tmp;

        v2.push_back(tmp);
    }

    std::set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), std::back_inserter(v));


// 
    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }

    cout << v.size() << endl;

    return 0;
}
