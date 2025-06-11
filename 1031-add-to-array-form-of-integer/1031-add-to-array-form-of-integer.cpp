class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
          vector<int> result;
        int n = num.size();
        
        // Start from the least significant digit of num
        int i = n - 1;
        int carry = 0;
        
        // Add k to the number represented by the vector num
        while (i >= 0 || k > 0 || carry > 0) {
            int digit = (i >= 0) ? num[i] : 0;  // Get the current digit or 0 if out of bounds
            int sum = digit + k % 10 + carry;  // Add the current digit, the last digit of k, and carry
            
            result.push_back(sum % 10);  // Store the result (current digit of the sum)
            carry = sum / 10;  // Update the carry
            
            k /= 10;  // Remove the last digit of k
            i--;  // Move to the next digit in num
        }
        
        // Reverse the result to make it in the correct order
        reverse(result.begin(), result.end());
        
        return result;
    
    }
};