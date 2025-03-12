class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int pcount = 0;
        int ncount = 0;
        int maxi = INT_MIN;
        for(int i =0 ; i<n ; i++){
            if(nums[i]>0){
                pcount++;
            }
            else if(nums[i]<0){
                ncount++;
            }
            
            maxi = max(pcount,ncount);
        }
        return maxi;
    }
};