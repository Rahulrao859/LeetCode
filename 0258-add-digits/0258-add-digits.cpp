class Solution {
public:
    int addDigits(int num) {
        
        while(num >= 10){ // Keep summing digits until we get a single digit

            int sum = 0;
            while(num > 0){
                sum = sum + num %10; // Add the last digit
                num = num/10;    // Remove the last digit
            }

            num = sum;   // Set num to the sum of its digits
        }

        return num; // Return the single digit
    }
};