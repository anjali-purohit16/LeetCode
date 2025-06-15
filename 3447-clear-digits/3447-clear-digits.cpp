class Solution {
public:
    string clearDigits(string s) {
        string st;
        for(int c=0;c<s.size();c++){
            if(isdigit(s[c]) )
            { st.pop_back();
             }
             else 
             st+=s[c];
        }
        return st;
    }
};