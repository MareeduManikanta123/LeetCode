class Solution {
public:
    int reverseBits(int n) {

        unsigned int ans = 0;

        for(int i = 0; i < 32; i++){
            ans <<= 1;          // shift answer left
            ans |= (n & 1);     // put last bit of n
            n >>= 1;            // remove last bit from n
        }

        return ans;
    }
};
