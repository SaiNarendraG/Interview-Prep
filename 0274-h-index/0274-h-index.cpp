class Solution {
public:
    int hIndex(vector<int>& arr) {

        int n = arr.size();
        sort(arr.begin(),arr.end());

        if(arr[0]>=n)  
        return n;
        
      

        
        for(int i = 0;i<n;i++)
        {
           int left = n-i;

           if(arr[i] >= left) 
           return left;
        }

        return 0;
        
    }
};