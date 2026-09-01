class Solution {
private:
    bool backtrack(vector<vector<char>>& board, const string& word, int i, int r, int c) {
        if (i == word.length()) {
            return true;
        }

        int rows = board.size();
        int cols = board[0].size();

        if (r < 0 || r >= rows || c < 0 || c >= cols || board[r][c] != word[i]) {
            return false;
        }

        char temp = board[r][c];
        board[r][c] = '#';

        bool found = backtrack(board, word, i + 1, r + 1, c) ||
                     backtrack(board, word, i + 1, r - 1, c) ||
                     backtrack(board, word, i + 1, r, c + 1) ||
                     backtrack(board, word, i + 1, r, c - 1);

        board[r][c] = temp;

        return found;
    }

public:
    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();

        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (board[r][c] == word[0] && backtrack(board, word, 0, r, c)) {
                    return true;
                }
            }
        }

        return false;
    }
};