class Solution {
  public:

    int sumOfSeries(int n) {
        // code here
        if(n==0){
            return 0;
        }
        
        
        return sumOfSeries(n - 1) + (n * n * n);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna