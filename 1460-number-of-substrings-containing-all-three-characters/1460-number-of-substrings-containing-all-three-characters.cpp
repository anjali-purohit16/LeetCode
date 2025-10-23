class Solution {
public:
    int numberOfSubstrings(string s) {
     vector<int>freq(26,0);
     int n=s.length();
     int count=0,curCount=0,left=0;
     for(int right=0;right<n;right++)
     {
        freq[s[right]-'a']++;
        if(freq[s[right]-'a']==1)
          curCount++;
        while(curCount==3){
            count+=n-right;
            freq[s[left]-'a']--;
            if(freq[s[left]-'a']==0)
             curCount--;
        left++;
        }
     }
     return count;
    }
};