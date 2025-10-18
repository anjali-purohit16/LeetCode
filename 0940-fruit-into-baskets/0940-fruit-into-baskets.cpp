class Solution {
public:
    int totalFruit(vector<int>& nums) {
        unordered_map<int, int> basket;
        int n=nums.size();
        int left=0,maxlen=0;

        for(int right=0;right<n;right++){

            basket[nums[right]]++;
            if(basket.size()>2)
            {
             basket[nums[left]]--;
              if(basket[nums[left]]==0)
                basket.erase(nums[left]);
            left++;
             }

        if(basket.size()<=2)
         maxlen=max(maxlen,right-left+1);


        }

        return maxlen;
    }
};