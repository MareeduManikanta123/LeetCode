class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> newarr;
        for(int i = 0; i < nums1.size(); i++){
            newarr.push_back(nums1[i]);
        }
        for(int i  = 0; i < nums2.size(); i++){
            newarr.push_back(nums2[i]);
        }
        sort(newarr.begin(),newarr.end());
        int n = newarr.size();
        double eve = 0;
        if(n % 2 == 0){
                eve  = newarr[n/2] + newarr[n/2 - 1];
                return eve/2;
        }
        else{
            eve = newarr[n/2];
            return eve;
        }
    }
};