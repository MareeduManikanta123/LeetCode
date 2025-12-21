class Solution {
public:
    int mirrorDistance(int n) {
        int rev = 0;
        int copy = n;
        while(n > 0){
            int a = n % 10;
            rev = rev * 10 + a;
            n = n / 10;
        }
        int sum = abs(copy - rev);
        return sum;
    }
};