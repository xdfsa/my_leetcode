#include <bits/stdc++.h>
using namespace std;

/*
class cmp{
public: 
        bool operator()(vector<int> &a, vector<int> &b){
        //最小堆
        return a[1] > b[1];
    }
};


class Solution{
public:
        int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        //迪杰斯特拉算法
        //不连通用0表示
        vector<vector<int>> dp(n, vector<int>(n,0));
        for(auto &flight : flights){
            dp[flight[0]][flight[1]] = flight[2];
        }
        priority_queue<vector<int>, vector<vector<int>>, cmp> que;
        //添加数据
        que.push({src, 0, K + 1});

        int money, step, id;
        while(!que.empty()){
            vector<int> temp = que.top();
            que.pop();
            id = temp[0];
            money = temp[1];
            step = temp[2];

            if(id == dst){
                return money;
            }

            if(step > 0){
                for(int i = 0; i < n; i++){
                    if(dp[id][i] > 0){
                        que.push({i, money + dp[id][i], step - 1});
                    }
                }
            }

        }
        return -1;

    }

};*/

/*
//------------------回溯法--------------
class Solution {

    int res = INT_MAX;
    vector<vector<int>> dp;
    vector<bool> visited;
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        K = min(K, n - 2);
        this->dp = vector<vector<int>>(n, vector<int>(n));
        for(auto &flight : flights){
            dp[flight[0]][flight[1]] = flight[2];
        }
        //int res = INT_MAX;
        this->visited = vector<bool>(n, false);
        dfs(src, dst, K + 1, 0);
        if(res == INT_MAX){
            return -1;
        }
        return res;
    }

    void dfs(int src, int dst, int K, int cost){
        if(src == dst){
            res = cost;
            return;
        }

        if(K == 0){
            return;
        }
        for(int i = 0; i < dp[src].size(); i++){
            if(dp[src][i]){
                if(visited[i]){
                    continue;
                }
                if(cost + dp[src][i] > res){
                    continue;
                }
                visited[i] = true;
                dfs(i, dst, K - 1, cost + dp[src][i]);
                visited[i] = false;    
            }
        }
    }
};*/


//---------------bellman-fold算法
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        int maxprice = INT_MAX;
        vector<vector<int>> dp(n, vector<int>(K+1, maxprice));
        //初始化
        for(int i = 0; i <= K; i++){
            dp[src][i] = 0;
        }

        //第一次松弛
        for(auto &flight : flights){
            if(flight[0] == src){
                dp[flight[1]][0] = flight[2];
            }
        }
        for(int i = 1; i < K + 1; i++){
            for(auto &flight : flights){
                int from = flight[0];
                int to = flight[1];
                if(dp[from][i - 1] != maxprice){
                    dp[to][i] = min(flight[2] + dp[from][i - 1], dp[to][i]);
                }
            }
        }
        return dp[dst][K] == maxprice ? -1 : dp[dst][K];
    }
};

int main(){
    int n, src, dst, K;
    n = 3, src = 0, dst = 2, K = 1;
    vector<vector<int>> edges{{0,1,100},{1,2,100},{0,2,500}};
    Solution s1;
    int res = s1.findCheapestPrice(n, edges, src, dst, K);
    return 0;
}