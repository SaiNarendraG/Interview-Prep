class Solution {
public:
    int minLength(string s) {
        
        
        stack <char> stk ; 
        for(auto ele : s) {
            if(ele=='B' and stk.size()>0 and stk.top()=='A' ) stk.pop() ; 
             else if(ele=='D' and stk.size()>0 and stk.top()=='C' ) stk.pop() ; 
            else stk.push(ele);
        }
        
        return stk.size() ;
    }
};