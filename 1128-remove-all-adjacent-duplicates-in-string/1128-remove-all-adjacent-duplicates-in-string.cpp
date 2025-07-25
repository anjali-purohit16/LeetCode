class Solution {
public:
    string removeDuplicates(string s) {
    stack<char> st;
    for(char c:s) {
        if(st.empty()){
            st.push(c);
            continue;
        }
        if(c!=st.top())
            st.push(c);
        
        else
            st.pop();
    }
    string result;
    while(!st.empty()){
        result=result+st.top();
        st.pop();
    }
    reverse(result.begin(),result.end());
    return result;
}
};