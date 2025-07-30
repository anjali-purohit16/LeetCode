class Solution {
public:
    int compress(vector<char>& chars) {
        int index=0;//write
        int i=0;
        int n=chars.size();
        while(i<n){
            int count=0;
            char current=chars[i];
            while(i<n && chars[i]==current){
                i++;
                count++;
            }
            chars[index++]=current;
            if(count>1){
                string countstr=to_string(count);
                for (char c: countstr){
                    chars[index++]=c;
                }
            }
        }
    return index;
    }
};

