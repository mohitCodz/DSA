// leetCode problem numnber 263 - Ugly Number
class Solution {
public:
    bool isUgly(int n) {
        if ( n<=0) return false;
        while( n % 2 == 0) n /= 2; // % 2 checks if n is divisible by 2 & n /= 2 divides n by 2 

.
        while( n % 3 == 0) n /= 3;
        while( n % 5 == 0) n /= 5;

        return n ==1;
    }
};