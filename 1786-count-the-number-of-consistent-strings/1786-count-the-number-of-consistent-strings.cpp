class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n = words.size();
        int count=0;
        for(int i = 0 ; i < n ; i++){
            if(words[i].find_first_not_of(allowed) == string::npos){
                count ++;
            } 
        }
        return count;
        
    }
};