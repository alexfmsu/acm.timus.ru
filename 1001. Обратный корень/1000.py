from sys import stdin
from math import sqrt

x = []

for line in stdin:
    _x = list(map(int, line.split()))
    x += _x[:]

# print(x)
# x = x.reverse()
# print(x)
for i in x[::-1]:
    print("{:.4f}".format(sqrt(i)))
    # print(line)

# while x = input():
#     print(sqrt(x))
# x = list(map(int, input().split()))

# print(x)

# for i in x:
    # print(sqrt(i))
# int main(){
#     long long x;
    
#     stack<long long> st;
    
#     while(cin >> x){
#         st.push(x);
#     }
    
#     while(!st.empty()){
#         double x = st.top();
        
#         cout << fixed << setprecision(4) << sqrt(x) << endl;
        
#         st.pop();
#     }
    
#     return 0;
# }
