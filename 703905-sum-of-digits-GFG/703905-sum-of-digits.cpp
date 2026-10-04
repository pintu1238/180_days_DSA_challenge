class Solution {
  public:
    int sumOfDigits(int n) {
        // code here
        if(n<0) 
           n=-n;
           
        if(n==0){
            return 0;
        }   
        return (n % 10) + sumOfDigits(n/10);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna