class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> newarr;
        k = k % nums.size();
        if(k == 0){
             return;
        }
         int s = nums.size() - k;

            for(int j = s ; j < nums.size(); j++){
                newarr.push_back(nums[j]);
            }
            for(int l = 0; l < s; l++){
                newarr.push_back(nums[l]);
           }
        nums = newarr;
    }
};