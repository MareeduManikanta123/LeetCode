class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> newarr(1,vector<int>(1,1));
        // vector<int> arr;
        // arr.push_back(1);
        // newarr.push_back(arr);
        for(int i = 1; i<numRows;i++){
            vector<int> arr1;
            for(int j = 0; j< newarr[i-1].size(); j++){
                if(j == 0){
                arr1.push_back(1);
               }
               else{
                 arr1.push_back(newarr[i-1][j-1] + newarr[i-1][j]);

               }
            }
            arr1.push_back(1);
            newarr.push_back(arr1);
        }
        return newarr;
        
    }
};