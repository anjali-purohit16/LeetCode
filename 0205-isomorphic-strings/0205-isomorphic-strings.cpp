class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> sToT;
        unordered_map<char, char> tToS;

        for (int i = 0; i < s.length(); ++i) {
            char cs = s[i];
            char ct = t[i];

            if ((sToT.count(cs) && sToT[cs] != ct) || 
                (tToS.count(ct) && tToS[ct] != cs)) {
                return false;
            }

            sToT[cs] = ct;
            tToS[ct] = cs;
        }

        return true;
    }
};