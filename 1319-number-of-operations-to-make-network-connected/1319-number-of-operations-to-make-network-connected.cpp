class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<bool>& vis) {
        vis[node] = true;

        for (int nei : adj[node]) {
            if (!vis[nei]) {
                dfs(nei, adj, vis);
            }
        }
    }

    int makeConnected(int n, vector<vector<int>>& connections) {
        // Need at least n - 1 cables
        if (connections.size() < n - 1)
            return -1;

        vector<vector<int>> adj(n);

        for (auto& edge : connections) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<bool> vis(n, false);
        int components = 0;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                components++;
                dfs(i, adj, vis);
            }
        }

       
        return components - 1;
    }
};