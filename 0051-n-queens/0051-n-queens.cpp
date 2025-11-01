class Solution {
public:
    vector<bool> leftDiagonal;
    vector<bool> rightDiagonal;
    vector<bool> column;
    vector<vector<string>> out;
    vector<string> current;

    void helper(int n, int size){
        if(n == size){
            out.push_back(current);
            return;
        }
        string row(size, '.');

        for(int i = 0;i < size;i++){
            if(leftDiagonal[n + i] || rightDiagonal[size + (n - i)] || column[i]){
                continue;
            }

            leftDiagonal[n + i] = true;
            rightDiagonal[size + (n - i)] = true;
            column[i] = true;

            row[i] = 'Q';
            current.push_back(row);

            helper(n + 1, size);

            row[i] = '.';
            current.pop_back();

            leftDiagonal[n + i] = false;
            rightDiagonal[size + (n - i)] = false;
            column[i] = false;


        }

    }

    vector<vector<string>> solveNQueens(int n) {
        leftDiagonal = vector<bool>(n + 1);
        rightDiagonal = vector<bool>(2 * n + 1);
        column = vector<bool>(n + 1);

        helper(0, n);

        return out;
    }
};