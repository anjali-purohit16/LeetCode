class Solution {
public:
    int countAtmost(vector<int>&nums,int k){
        if(k<0) return 0;
        int left=0,sum=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]%2!=0) k--;
            while(k<0){
                if(nums[left]%2!=0)
                k++;
                left++;
            }
            sum+=(right-left)+1;
        }
            return sum;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return countAtmost(nums,k)-countAtmost(nums,k-1);
    }
};