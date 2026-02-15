class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size()-1;
        int j = b.size()-1;
        string total_sum = "";
        int carry = 0;
        while(i >= 0 || j >= 0 || carry == 1){
            int sum = carry;
            if(i >= 0){
                sum += a[i] - '0';
                i--;
            }
            if(j >= 0){
                sum += b[j] - '0';
                j--;
            }
           total_sum += sum%2 + '0';
            carry = sum/2;
        }
        reverse(total_sum.begin(),total_sum.end());
        return total_sum;
    }
};