class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        int rows=heightMap.size();
        int cols=heightMap[0].size();
        vector<vector<int>> visited(rows,vector<int>(cols,0));
        priority_queue<vector<int>,vector<vector<int>>,greater<>> minHeap;

        for(int i=0;i<rows;i++){
            minHeap.push({heightMap[i][0],i,0});
            minHeap.push({heightMap[i][cols-1],i,cols-1});
            visited[i][0]=visited[i][cols-1]=1;
        }
        for(int j=0;j<cols;j++){
            minHeap.push({heightMap[0][j],0,j});
            minHeap.push({heightMap[rows-1][j],rows-1,j});
            visited[0][j]=visited[rows-1][j]=1;
        }

        int trappedWater=0;
        int directions[4][2]={{1,0},{-1,0},{0,1},{0,-1}};

        while(!minHeap.empty()){
            auto cell=minHeap.top();minHeap.pop();
            int currHeight=cell[0], x=cell[1], y=cell[2];

            for(auto& dir:directions){
                int nx=x+dir[0], ny=y+dir[1];
                if(nx<0||ny<0||nx>=rows||ny>=cols||visited[nx][ny]) continue;

                visited[nx][ny]=1;
                trappedWater+=max(0,currHeight-heightMap[nx][ny]);

                minHeap.push({max(currHeight,heightMap[nx][ny]),nx,ny});
            }
        }
        return trappedWater;
    }
};
