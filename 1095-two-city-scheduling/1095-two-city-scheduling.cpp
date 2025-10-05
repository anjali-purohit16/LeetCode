class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
    int total=0;
    int n=costs.size()/2;
     for(auto &c :costs){
        total+=c[0];
     }
     vector<int>diff;
     for(auto &c :costs){
        diff.push_back(c[1]-c[0]);
     }
     sort(diff.begin(),diff.end());
      for(int i=0;i<n;i++)
        total+=diff[i];
    return total;
    }
};