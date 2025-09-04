// leetCode  question 26 - Remove Duplicates from Sorted Array using 2 Pointer approach

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int lastUnique = 0; // stores last unique element
        for(int i =1;i<nums.size();i++){
            if(nums[i] != nums[lastUnique]) lastUnique++;
            nums[lastUnique] = nums[i];
        }
        return lastUnique +1;
    }
};