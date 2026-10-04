class Solution {
public:
     double solve(double x, long n) {
        
        if(n == 0)
            return 1;
        
        if(n < 0)
            return 1/solve(x, -n);
        
        
        if(n%2 == 0) {
            return solve(x*x, n/2);
        }
        
        return x*solve(x*x, (n-1)/2);
        
    }
    
    double myPow(double x, int n) {
        return solve(x, (long)n);
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna