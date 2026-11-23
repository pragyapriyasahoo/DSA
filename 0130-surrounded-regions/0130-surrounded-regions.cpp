class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        if (m == 0) return;
        int n = board[0].size();
        if (m <= 2 || n <= 2) return;

        queue<pair<int, int>> q;

        auto enqueueIfSafe = [&](int r, int c) {
            if (r >= 0 && r < m && c >= 0 && c < n && board[r][c] == 'O') {
                board[r][c] = '#';
                q.push({r, c});
            }
        };

        for (int c = 0; c < n; ++c) {
            enqueueIfSafe(0, c);
            enqueueIfSafe(m - 1, c);
        }

        for (int r = 0; r < m; ++r) {
            enqueueIfSafe(r, 0);
            enqueueIfSafe(r, n - 1);
        }

        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};

        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();

            for (int d = 0; d < 4; ++d) {
                enqueueIfSafe(r + dr[d], c + dc[d]);
            }
        }

        for (int r = 0; r < m; ++r) {
            for (int c = 0; c < n; ++c) {
                if (board[r][c] == 'O') {
                    board[r][c] = 'X';
                } else if (board[r][c] == '#') {
                    board[r][c] = 'O';
                }
            }
        }
    }
};