class Solution {
public:
    bool isAnagram(string s, string t) {
        const int MAX_CHAR=26;
        vector<int>freq(MAX_CHAR,0);
        for(char ch :s)
            freq[ch-'a']++;
        for(char ch :t)
            freq[ch-'a']--;
        for(int count :freq)
            if(count!=0)
                return false;
          
        return true;
    }
};