// leetCode problem number 258 - Add Digits
class Solution {
public:
    int addDigits(int num) {
        // this loop will run ultil it found the single digit
        while ( num >= 10 || num <= -10){
            int sum = 0;
            // this loop will goes through each digit of num
            while(num != 0){
                sum += num % 10;
                num /= 10;
            }
            num = sum; //
        }
        return num;
    }
};