// leetCode problem 507 - Perfect Number
class Solution {
public:
   bool isPerfect(int n) {
    if (n <= 0) return false;
    int num = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {  // i is a divisor
            num += i;
        }
    }
    return num == n;
}

};