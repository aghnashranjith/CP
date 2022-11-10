class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 0;
        int sum = digits[n-1] + 1;
        if(sum<10)
        {
            digits[n-1] += 1;
            return digits;
        }
        else
        {
            digits[n-1] = sum%10;
            carry = sum/10;
        }
        for(int i=n-2; i>=0; i--)
        {
            sum = carry + digits[i];
            digits[i] = sum%10;
            carry = sum/10;
        }
        if(carry>0)
            digits.insert(digits.begin(), carry);
        
        return digits;
    }
};