class Solution {
public:
    vector<string> generateParenthesis(int n) {
       vector<string> res;
        backtrack(res, "", 0, 0, n);
        return res;
    }

private:
    void backtrack(vector<string>& res, string current, int open, int close, int max) {
        if (current.length() == 2 * max) {
            res.push_back(current);
            return;
        }

        if (open < max)
            backtrack(res, current + "(", open + 1, close, max);
        if (close < open)
            backtrack(res, current + ")", open, close + 1, max);
    }
};
