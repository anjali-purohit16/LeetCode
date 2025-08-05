class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0,cnt2=0;
        int el1=0,el2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(cnt1==0 && el2!=nums[i]){
                cnt1++;
                el1=nums[i];
            }
           else if(cnt2==0 && el1!=nums[i]){
                cnt2++;
                el2=nums[i];
            }
            else if(nums[i]==el1)cnt1++;
            else if(nums[i]==el2)cnt2++;
            else {
                cnt1--;
                cnt2--;
            }
        }
        vector<int>ls;
        int count1=0,count2=0;
        for(int i=0;i<n;i++){
            if(el1==nums[i])count1++;
            if(el2==nums[i])count2++;
        }
        int mini =(int)(n/3)+1;
        if(count1>=mini)ls.push_back(el1);
        if(count2>=mini  && el2 != el1)ls.push_back(el2);
        sort(ls.begin(),ls.end());
        return ls;
    }
};