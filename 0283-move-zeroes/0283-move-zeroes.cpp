class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> newarr(nums.size());
        int j = 0;
        int n = nums.size() - 1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                newarr[n] = nums[i];
                n--;
            }
            else{
                newarr[j] = nums[i];
                j++;
            }
        }
        nums = newarr;
    }
};