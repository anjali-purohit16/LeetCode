class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int maxVal = *max_element(nums.begin(), nums.end());
        vector<int> freq(maxVal + 1, 0);
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
            if(freq[nums[i]]>1) 
              return nums[i];
        }
        return 0;
    }
};