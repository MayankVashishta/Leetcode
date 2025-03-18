class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[256];
        fill(hash,hash+256,-1);
        int n = s.length();
        int left = 0, right = 0, maxlen =0,len =0;
        while(right<n){
            if(hash[s[right]] != -1){ // element mil gya hash map mai
                if(hash[s[right]] >= left){ // it is valid 
                    left = hash[s[right]] + 1; //move the left +1 the repeated value
                }
            }
            len = right - left + 1;
            maxlen =  max(len,maxlen);
            hash[s[right]] = right; // update the index in hash array
            right++; //increment
        }
        return maxlen;
        
    }
};