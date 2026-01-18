class Solution {
public:
    bool isRechable(int x, int y, int c1, int c2, int radius){
        int man_dis = abs(x-c1) + abs(y-c2);
        return man_dis <= radius;
    }

    vector<int> solve(vector<vector<int>>& towers, vector<int>& center, int radius, vector<int>& ans, int& max_idx, vector<vector<int>>& temp){
        int n = towers.size();
        for(int i=0; i<n; i++){
            if(isRechable(towers[i][0], towers[i][1], center[0], center[1], radius)){
                temp.push_back(towers[i]);
            }  
        }
        if(temp.size() == 0) return {-1, -1}; 
        n = temp.size();
        
        for(int i=0; i<n; i++){
            if(temp[i][2] > max_idx){
                max_idx = temp[i][2];
                ans = {temp[i][0], temp[i][1]};
            }
            else if(temp[i][2] == max_idx){
                if(temp[i][0] < ans[0] || (temp[i][0] == ans[0] && temp[i][1] < ans[1])){
                    ans = {temp[i][0], temp[i][1]};
                }
            }
        }
        return ans;   
    } 
    
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        vector<int> ans = {-1, -1};
        int max_idx = -1;
        vector<vector<int>> temp;
        return solve(towers, center, radius, ans, max_idx, temp); 
    }
};