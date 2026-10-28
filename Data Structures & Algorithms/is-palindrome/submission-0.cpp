class Solution {
public:
    bool isPalindrome(string s) {
        bool solve = true;
        string clean = "";
        
        for (char &c : s) {
        c = tolower(static_cast<unsigned char>(c));
        if(isalnum(c))
            clean += c;
        }

        int l=0, r = clean.size()-1;
        while(l<r){
            if(clean[l] != clean[r]){
                solve = false;
                break;
            }
            l++,r--;
        }
        return solve;
    }
};
