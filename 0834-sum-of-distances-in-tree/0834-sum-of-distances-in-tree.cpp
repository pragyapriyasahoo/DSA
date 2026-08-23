class Solution {
public:
    vector<int> count;
    vector<int> ans;

    void dfs1(int node, int parent, vector<vector<int>>& graph) {
        count[node] = 1;

        for (int child : graph[node]) {
            if (child == parent) continue;

            dfs1(child, node, graph);

            count[node] += count[child];
            ans[node] += ans[child] + count[child];
        }
    }

    void dfs2(int node, int parent, vector<vector<int>>& graph, int n) {
        for (int child : graph[node]) {
            if (child == parent) continue;

            ans[child] = ans[node] - count[child] + (n - count[child]);

            dfs2(child, node, graph, n);
        }
    }

    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>> graph(n);

        for (auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];

            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        count.resize(n);
        ans.assign(n, 0);

        dfs1(0, -1, graph);
        dfs2(0, -1, graph, n);

        return ans;
    }
};