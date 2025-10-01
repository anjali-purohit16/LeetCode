class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
     for(auto &row :image){
       int l=0,r=image[0].size()-1;
       while(l<=r){
        if(l==r)
          row[l] ^= 1;
        else{
            int temp =row[l]^1;
            row[l]=row[r]^1;
            row[r]=temp;
        }
         l++;
         r--;
       }
     }
    return image; 
    }
};