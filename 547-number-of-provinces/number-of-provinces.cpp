#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void bfs(int start, const vector<vector<int>>& g, vector<int>& vis){
        queue<int> q;
        q.push(start);
        vis[start] = 1;

        while (!q.empty()){
            int u = q.front();
            q.pop();

            for (int v = 0; v<g.size(); v++){
                if (g[u][v]==1 && !vis[v]){
                    vis[v]=1;
                    q.push(v);
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> vis(n, 0);
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                count++;
                bfs(i, isConnected, vis);
            }
        }

        return count;
    }
};
