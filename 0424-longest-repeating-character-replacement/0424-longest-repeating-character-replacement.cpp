class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0,maxcount=0,maxlen=0;
        vector<int>freq(26,0);
        for(int right=0;right<s.length();right++){
            freq[s[right]-'A']++;
            maxcount=max(maxcount,freq[s[right]-'A']);
            if((right-left+1)-maxcount>k){
                freq[s[left]-'A']--;
                left++;
            }
            maxlen=max(maxlen,right-left+1);
            
        }
        
        return maxlen;
    }
};