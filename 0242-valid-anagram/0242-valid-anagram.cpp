class Solution {
public:
    bool isAnagram(string s, string t) {
        
        map<char ,int> mp1 ;
       // map <char , int> mp2 ; 
        
        for(auto ele : s) mp1[ele] +=1 ; 
        
        for(auto ele : t) mp1[ele]-- ; 
        
        for(auto ele : mp1)  {
            
            if(ele.second!=0) return false ; 
        }
        return true ; 
         
    }
};