class Solution {
public:
    int romanToInt(string s) {
        
        
        
        map<char , int> mp {  {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000} }; 
                       int ans = 0 ;      
        for (int i=1 ; i <=s.size() ; i++)  { 
         if(mp[s[i-1]]<mp[s[i]]){
            //for cases such as IV,CM, XL, etc...
            ans=ans-mp[s[i-1]];
        }
        else{
            ans=ans+mp[s[i-1]];
        }
        }
                            return ans ; 
        
        
    }
};