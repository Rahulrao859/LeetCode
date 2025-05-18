class Solution {
public:
    // Function to check if a number is prime
    bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;  // 2 is the only even prime
    if (num % 2 == 0) return false;  // Even numbers greater than 2 are not prime
    for (int i = 3; i <= sqrt(num); i += 2) {  // Check odd divisors up to sqrt(num)
        if (num % i == 0) return false;
    }
    return true;
}

   // Function to check if a number is a palindrome
    bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
     }
     return original == reversed;
  }

    int primePalindrome(int n) {
        while (true) {
        if (isPalindrome(n) && isPrime(n)) {
            return n;
        }
        n++;
      }
    }
};