class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m = maze.size(), n = maze[0].size();
        queue<pair<int, int>> q;
        q.push({entrance[0], entrance[1]});
        maze[entrance[0]][entrance[1]] = '+';

        int d[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};
        int steps = 0;

        while (!q.empty()) {
            int sz = q.size();
            steps++;

            while (sz--) {
                auto [r, c] = q.front();
                q.pop();

                for (auto& x : d) {
                    int nr = r + x[0], nc = c + x[1];

                    if (nr < 0 || nr >= m || nc < 0 || nc >= n ||
                        maze[nr][nc] == '+')
                        continue;

                    if (nr == 0 || nr == m - 1 || nc == 0 || nc == n - 1)
                        return steps;

                    maze[nr][nc] = '+';
                    q.push({nr, nc});
                }
            }
        }

        return -1;
    }
};