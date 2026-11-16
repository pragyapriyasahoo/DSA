class Solution {
private:
    int dfs(int u, int p, vector<vector<int>>& adj, vector<bool>& hasApple) {
        int totalTime = 0;
        
        for (int v : adj[u]) {
            if (v == p) continue;
            
            int timeFromChild = dfs(v, u, adj, hasApple);
            
            if (timeFromChild > 0 || hasApple[v]) {
                totalTime += timeFromChild + 2;
            }
        }
        
        return totalTime;
    }

public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>> adj(n);
        for (const auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        return dfs(0, -1, adj, hasApple);
    }
};