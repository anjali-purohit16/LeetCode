class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int count[3] = {0};  // count of 'a', 'b', 'c'
        int left = 0, result = 0;

        for (int right = 0; right < n; right++) {
            count[s[right] - 'a']++;

            // Shrink the window until it's missing one of the letters
            while (count[0] > 0 && count[1] > 0 && count[2] > 0) {
                result += n - right;  // every substring starting here is valid
                count[s[left] - 'a']--;
                left++;
            }
        }
        return result;
    }
};