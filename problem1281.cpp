// leetCode problem 1281 -  Subtract the Product and Sum of Digits of an Integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product =1,sum=0;
        while(n>0){
            int digit = n%10;
            product *=digit;
            sum += digit;
            n/=10;  // remove last digit
        }
        return product - sum;
    }
};