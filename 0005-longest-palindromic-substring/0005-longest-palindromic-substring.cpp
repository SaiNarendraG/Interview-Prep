class Solution {
public:
    string longestPalindrome(string s) {
        string ans="",temp="",longest="";
        
        for(int i=0;i<s.size();i++){
            int j=s.size()-1;

            while(i<j){
                if(s[i]==s[j] && longest.size()<(j-i+1)){ 
                    temp=s.substr(i,(j-i+1));
                    ans=temp;
                    reverse(temp.begin(),temp.end());
                    if(ans==temp)
                    longest=ans;
                }
                j--;
            }
        }
        if(longest.size()==0)  
        longest=s[0];

        return longest;
    }
};