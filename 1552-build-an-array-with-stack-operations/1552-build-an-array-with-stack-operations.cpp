class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> st;
        int j=0;
        for(int i=1;i<=n && j<target.size();i++){
            st.push_back("Push");
            if(target[j]!=i)
                st.push_back("Pop");
            else
             j++;
        }
        return st;
    }
};