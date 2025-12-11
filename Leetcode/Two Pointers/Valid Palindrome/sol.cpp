class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==0)return true;
        string pal="";
        for(char c : s){
            if(isalnum(c)){
                pal+=tolower(c);
            }
        }

        int l=0,r=pal.size()-1;
        while(l<r){
            if(pal[l]==pal[r]){
                l++;r--;
            }else{
                return false;
            }
        }

        return true;

    }
};