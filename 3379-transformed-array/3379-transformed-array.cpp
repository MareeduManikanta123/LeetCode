class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> newarr(n);

        for(int i = 0; i < n; i++){
            int new_index = ((i + nums[i]) % n + n) % n;
            newarr[i] = nums[new_index];
        }
        return newarr;
    }
};
