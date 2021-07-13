#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        for(int i = 0; i < ops.size(); i++){
            if(ops[i] != "C" && ops[i] != "D" && ops[i] != "+"){
                st.push(stoi(ops[i]));
            }else if(ops[i] == "C"){
                st.pop();
            }else if(ops[i] == "D"){
                st.push(2 * st.top());
            }else if(ops[i] == "+"){
                int temp = st.top();
                int ans = temp;
                st.pop();
                ans += st.top();
                st.push(temp);
                st.push(ans);
            }
        }
        int res = 0;
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        return res;
    }

};

int main(){
    return 0;
}