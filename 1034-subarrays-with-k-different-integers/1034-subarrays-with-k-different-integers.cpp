class Solution {
public:
    int countAtmost(vector<int>& nums, int k){
        int l=0,count=0;
        unordered_map<int,int>mpp;
        for(int r=0;r<nums.size();r++){
            if(mpp[nums[r]]==0) k--;
             
            mpp[nums[r]]++;

            while(k<0){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0)
                k++;
                l++;
            }
           count+=(r-l+1);
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return countAtmost(nums,k)-countAtmost(nums,k-1);
    }
};