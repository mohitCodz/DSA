// leetcode problem number 167
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        while (i < j) {
            int sum = numbers[i] + numbers[j];
            if (sum == target) return {i + 1, j + 1}; // 1-based indices
            else if (sum < target) i++;
            else j--;
        }
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(numbers, target);

    cout << "Indices: [ ";
    for (int idx : result) cout << idx << " ";
    cout << "]\n";

    return 0;
}
