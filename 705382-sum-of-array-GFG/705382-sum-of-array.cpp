class Solution {
private:
    int solve(vector<int>& arr, int index) {
        // Base case: jab index array ke size tak pahunch jaye
        if (index == arr.size()) {
            return 0;
        }

        // Current element + aage ke saare elements ka sum
        return arr[index] + solve(arr, index + 1);
    }

public:
    int arraySum(vector<int>& arr) {
        return solve(arr, 0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna