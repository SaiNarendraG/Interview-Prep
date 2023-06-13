class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
//         sort(nums.begin(), nums.end()) ; 
//         int N=nums.size() ;
//       //vector <int> ans ; 
//       int count = 1; 
//       int ans = INT_MIN ; 
      
//       if(N==1) return 1 ; 
//         if(N==0) return 0 ; 
//       for(int i=0 ; i<N-1 ; i++){
//           if(nums[i]+1 == nums[i+1]) {
//               //cout<<arr[i]<<" " ; 
//               count ++ ; 
//               ans = max(ans,count) ;
//           }
//           else if(nums[i]==nums[i+1]) continue  ;
//           else {
              
//               count =1 ; 
//           }
//           ans = max(ans,count) ;
//       }
//          ans = max(ans,count) ;
//       return ans ;
        
        unordered_map<int, bool> map;
        for(int i = 0; i<nums.size(); i++){
            map[nums[i]] = true;
        }
        for(int i=0; i<nums.size(); i++){
            if(map.count(nums[i]-1) > 0){
                map[nums[i]] = false;
            }
        }
        int maxlen = 0;
        for(int i=0; i<nums.size(); i++){
            if(map[nums[i]] == true){
                int j=0; int count=0;
                while(map.count(nums[i]+j) > 0){
                    j++;
                    count++;
                }
                if(count>maxlen){
                    maxlen = count;
                }
            }
        }
        return maxlen;
        
    }
};