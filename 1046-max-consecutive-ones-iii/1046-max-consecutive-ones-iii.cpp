class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxlen = 0, zeroes = 0;
        int left = 0, right = 0;
        while (right < n) {
            if (nums[right] == 0)
                zeroes++;

            while (k < zeroes) { // jb tk K se jyada 0 hain shrink
                if (nums[left] == 0)
                    zeroes--;
                left++;
            }
            maxlen = max(maxlen, right - left + 1);
            right++;
        }
        return maxlen;
    }
};