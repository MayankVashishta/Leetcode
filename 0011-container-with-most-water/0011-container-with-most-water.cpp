class Solution {
public:
    int maxArea(vector<int>& height) {
        int n  = height.size();
        int left = 0 , right = n-1;
        int maxarea = 0;
        while (left < right){
            int breadth = right - left;
            int length = min(height[right],height[left]); 
            int area = length*breadth;
            maxarea = max(maxarea,area);
            if( height[left] < height[right]) left++;
            else right--;
        }
        return maxarea;

        
    }
};