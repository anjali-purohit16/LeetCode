class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> res(n, 0);
        int count = 0, prev = 0;
        prev = 0;
        if (boxes[0] == '1') count++;
        for (int i = 1; i < n; i++) {
            res[i] += (count + prev);
            prev = (count + prev);
            count += boxes[i] == '1' ? 1 : 0;
        }

        count = 0, prev = 0;
        if (boxes[n - 1] == '1') count++;
        for (int i = n - 2; i >= 0; i--) {
            res[i] += (count + prev);
            prev = (count + prev);
            count += boxes[i] == '1' ? 1 : 0;
        }

        return res;
    }
};