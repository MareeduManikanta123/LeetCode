class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {

            // If no current candidate, choose one
            if (count == 0) {
                candidate = nums[i];
                count = 1;
            }
            // If same as candidate, increase count
            else if (nums[i] == candidate) {
                count++;
            }
            // If different, decrease count
            else {
                count--;
            }
        }

        return candidate;
    }
};
