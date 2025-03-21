class Solution {
public:
    void findcombinationsum(int index, int target, vector<int> &ds, vector <vector<int>> &ans , vector <int> &arr){
        if(index == arr.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        // if we pickup an element 
        if(arr[index] <= target){
            ds.push_back(arr[index]);
            findcombinationsum(index ,target - arr[index],ds,ans,arr);
            ds.pop_back();
        }
        findcombinationsum(index+1,target,ds,ans,arr);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector <vector<int>> ans;
        vector <int> ds;
        findcombinationsum(0,target,ds,ans,candidates);  
        return ans; 
    }
};