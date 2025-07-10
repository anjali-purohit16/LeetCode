class Solution {
public:
    vector<vector<int>> ans;

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;
        solve(nums, 0, current);
        return ans;
    }

    void solve(vector<int>& nums, int i, vector<int>& current) {
        if (i == nums.size()) {
            ans.push_back(current);  // push current subset
            return;
        }

        // Include nums[i]
        current.push_back(nums[i]);
        solve(nums, i + 1, current);

        // Exclude nums[i]
        current.pop_back();
        solve(nums, i + 1, current);
    }
};

