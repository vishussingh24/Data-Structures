class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        map<int, int> freq;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<2; j++){
                freq[edges[i][j]]++;
            }
        }
        
        for(auto it: freq){
            if(it.second == n){
                return it.first;
            }
        }
        return -1;
    }


    // int findCenter(vector<vector<int>>& edges) {
    //     vector<vector<int>> adj(n+1, vector<int>(n+1));

    //     for(int[] edg: edges){
    //         int u = edg[0];
    //         int v = edg[1];
    //         adj[u][v] = 1;
    //         adj[v][u] = 1;
    //     }

    //     int ans = -1;

    //     for(int i=0; i<n; i++){

    //     }
    // }
};