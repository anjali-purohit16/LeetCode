class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
     map<char,int>ans;
    for(int i=0;i<stones.length();i++){
        ans[stones[i]]++;
    }
    int sum=0;
    for(int i=0;i<jewels.length();i++){
        sum+=ans[jewels[i]];
    }
    return sum;
    }
};