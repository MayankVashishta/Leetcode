class Solution {
public:
    string expand(const string& s,int left,int right){
        while(left >= 0 && right < s.length() && s[left] == s[right]){
            left--;
            right++;
        }
        return s.substr(left+1 ,right-left-1);
    }
    string longestPalindrome(string& str) {
        if(str.empty()) return "";
        int left, right = 0;
        string longest = "";
        int n = str.size();
        for(int i =0 ; i < n ;i++){
            string oddpal = expand(str,i,i);
            string evenpal = expand(str,i,i+1);
            if(oddpal.length() > longest.length()) longest = oddpal;
            if(evenpal.length() > longest.length()) longest = evenpal;
        }
        return longest;
    }
};