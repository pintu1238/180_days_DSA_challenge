class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        if (b == 0) {
            return a;
        }

        // Recursive Call: b banta hai naya 'a', aur (a % b) naya 'b'
        return gcd(b, a % b);
        
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna