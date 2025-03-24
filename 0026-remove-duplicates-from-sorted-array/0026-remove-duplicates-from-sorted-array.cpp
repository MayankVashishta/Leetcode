class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count= 0 ;
        map <int,int> m;
        for(int i =0 ; i<nums.size() ; i++){
            m[nums[i]]++;
        }
        nums.clear();
        for(auto it : m){
            nums.push_back(it.first);
        }
    return nums.size();
    }
};