// leetCode problem 342 - Power of four
class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;
        while(n % 4 == 0){
            n /= 4;
        }
        return n == 1;
    }
};