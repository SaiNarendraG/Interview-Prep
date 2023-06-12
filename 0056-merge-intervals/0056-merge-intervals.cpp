class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        for(auto ele : intervals){
            if(ans.empty() or  ans.back()[1] < ele[0]){
                ans.push_back(ele);
            }
            else{
                ans.back()[1] = max(ans.back()[1], ele[1]);
            }
        }
        return ans;
    }
};
