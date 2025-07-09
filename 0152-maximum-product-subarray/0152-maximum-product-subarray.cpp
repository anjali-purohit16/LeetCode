class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        int l=1,r=1;
        if(n==1) return nums[0];
        for(int i=0;i<n;i++)
        {
            l=l==0?1:l;
            r=r==0?1:r;
            l*=nums[i];
            r*=nums[n-1-i];
            res=max(res,max(l,r));
        }
        return res;
    }
};