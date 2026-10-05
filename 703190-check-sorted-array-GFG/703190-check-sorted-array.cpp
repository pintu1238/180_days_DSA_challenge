class Solution {
  public:
    
    bool solve(const vector<int>& arr, int index) {
            // Base case: jab last element ya uske aage pahunch jayein
            if (index >= arr.size() - 1) {
                return true;
            }

            // Agar order bigad gaya (current > next)
            if (arr[index] > arr[index + 1]) {
                return false;
            }

            // Agle index ke liye check karo
            return solve(arr, index + 1);
        }
  
  
  
    bool isSorted(vector<int>& arr) {
        
        return solve(arr, 0);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna