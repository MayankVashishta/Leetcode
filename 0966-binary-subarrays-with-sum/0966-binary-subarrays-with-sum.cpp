class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }
    int atMost(vector<int>& nums, int goal) {
        if(goal < 0) return 0;
        int n = nums.size();
        int l = 0 , r = 0;
        int ct = 0;
        int sum = 0;
        while(r < n){
            sum += nums[r];
            while(goal < sum){
                sum -= nums[l];
                l++;
            }
            ct += (r - l + 1);
            r++;
        }
        return ct;
    }
};