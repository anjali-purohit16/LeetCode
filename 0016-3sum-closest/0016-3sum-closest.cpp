class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
         
         int distance=INT_MAX;
          int cursum=0;
          int closestSum=0;
        for(int i=0;i<n;i++)
        {
            int l=i+1;
            int r=n-1;
           while(l<r){
            cursum=(nums[i]+nums[l]+nums[r]);
           // distance=min(distance,abs(target -cursum));
            if(cursum==target) return cursum;
            else if(cursum<target)l++;
            else r--;
           if (abs(target - cursum) < distance) {
              distance = abs(target - cursum);
                closestSum = cursum;
            }
           }
        }
        return closestSum;
    }
};