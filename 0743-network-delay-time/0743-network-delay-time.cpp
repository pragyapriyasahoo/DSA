class Solution {
public:
    vector<int> dist;
    vector<vector<pair<int,int>>> adj;

    void dfs(int node, int time) {
        if (time >= dist[node])
            return;

        dist[node] = time;

        for (auto &it : adj[node]) {
            int next = it.first;
            int wt = it.second;

            dfs(next, time + wt);
        }
    }

    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        adj.resize(n + 1);
        dist.assign(n + 1, INT_MAX);

        for (auto &t : times) {
            int u = t[0];
            int v = t[1];
            int w = t[2];

            adj[u].push_back({v, w});
        }

        dfs(k, 0);

        int ans = 0;

        for (int i = 1; i <= n; i++) {
            if (dist[i] == INT_MAX)
                return -1;

            ans = max(ans, dist[i]);
        }

        return ans;
    }
};
