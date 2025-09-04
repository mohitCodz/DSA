// leetCode problem number 11 - container with most water

// 2 Pointers Approach - Optimal Solution
class Solution {
public:
    int maxArea(vector<int>& height) {
      int l=0,currWater=0,maxWater=0;
      int r = height.size()-1;
      while(l<r){
      int w = r - l;
      int h = min(height[l],height[r]);
      currWater = w * h;
maxWater = max(maxWater,currWater);
height[l] < height[r] ? l++:r--;
      }
      return maxWater;
    }
};

/* 
using Brute Force Approach
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxArea = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int width = j - i; 
                int h = min(height[i], height[j]); 
                int area = width * h;
                maxArea = max(maxArea, area);
            }
        }

        return maxArea;
    }
};
*/