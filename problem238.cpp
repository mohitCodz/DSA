// Product of Array Except Self - leetode question 238 
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(n,1);
         vector<int> pefix(n,1);
          vector<int> sufix(n,1);

          // prefix
          for(int i =1;i<n;i++){
            prefix[i] = prefix[i-1] * nums[i-1];
          }

          // sufix
          for(int i =n-2;i>=0;i--){
            sufix[i] = sufix[i+1]*nums[i+1];
          }
          return ans;
    }
};