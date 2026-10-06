class Solution {
  public:
    void solve(vector<int>& arr, int index, int sum, vector<int>& ans) {
            // Base case: jab saare elements traverse ho jayein
            if (index == arr.size()) {
                ans.push_back(sum);
                return;
            }

            // Choice 1: Exclude (element ko sum mein add nahi kiya)
            solve(arr, index + 1, sum, ans);

            // Choice 2: Include (current element ko sum mein add kiya)
            solve(arr, index + 1, sum + arr[index], ans);
        }
  
  
  
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> ans;

        // index = 0, initial sum = 0
        solve(arr, 0, 0, ans);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna