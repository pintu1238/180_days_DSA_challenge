class Solution {
  public:
    int solve(const vector<int>& arr, int target, int index) {
            // Base case: jab array end ho jaye
            if (index == arr.size()) {
                return 0;
            }

            // Sorted hone ki wajah se: agar current element target se bada ho gaya,
            // toh aage target kabhi nahi milega, yahin ruk jao (pruning)
            if (arr[index] > target) {
                return 0;
            }

            int count = (arr[index] == target) ? 1 : 0;
            return count + solve(arr, target, index + 1);
        }

  
        int countFreq(vector<int>& arr, int target) {
            return solve(arr, target, 0);
        }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna