class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        if(nums.size()==1)
            return nums[0];
        while(start<=end)
        {
            int mid=start+(end-start)/2;
        if((mid%2==0 && nums[mid]==nums[mid+1]) || (mid%2==1 && nums[mid]==nums[mid-1]))
        {
            start=mid+1;
        }
            else
            {
                end=mid-1;
            }
        }
        return nums[start];
    }
};