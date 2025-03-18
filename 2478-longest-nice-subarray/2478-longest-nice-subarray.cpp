class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size(), maxlen = 1, left = 0;
        int used_bits = 0;
        for(int right = 0 ; right < n ; right ++){
            while((used_bits&nums[right]) != 0 ){
                used_bits = used_bits ^ nums[left];
                left++;
            }
        used_bits = used_bits | nums[right];
        maxlen = max(maxlen,right - left + 1);
        }
        return maxlen;
    }
};