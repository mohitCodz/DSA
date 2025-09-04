// leetCode problem number 11 - container with most water
class Solution {
public:
    int maxArea(vector<int>& height) {
       for (itn i = 0; i < n; i++)
       {
       for (int j = i+1; j < n; j++)
       {
       int width = j-1; // width
       height = min(height[i],height[j]);
       int area = width * height;
       maxArea = max(maxArea,area);
       }
       
       }
       return maxArea;
        
    }
};