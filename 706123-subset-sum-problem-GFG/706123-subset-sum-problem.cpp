// class Solution {
//   public:
//     bool find(const vector<int>& arr, int index, int target) {
//             // Base Case 1: Target achieve ho gaya
//             if (target == 0) {
//                 return true;
//             }

//             // Base Case 2: Array khatam ho gaya ya target negative chala gaya
//             if (index == arr.size() || target < 0) {
//                 return false;
//             }

//             // Choice 1: Exclude  ||  Choice 2: Include
//             return find(arr, index + 1, target) || find(arr, index + 1, target - arr[index]);
//         }
  
  
//     bool isSubsetSum(vector<int>& arr, int sum) {
//         // code here
//         return find(arr, 0, sum);
        
//     }
// };


class Solution {
private:
    bool find(const vector<int>& arr, int index, int target, vector<vector<int>>& dp) {
        // Base Case 1: Target achieve ho gaya
        if (target == 0) {
            return true;
        }

        // Base Case 2: Array khatam ho gaya ya target negative ho gaya
        if (index == arr.size() || target < 0) {
            return false;
        }

        // Agar yeh state pehle calculate ho chuki hai, direct return karo
        if (dp[index][target] != -1) {
            return dp[index][target];
        }

        // Exclude (current element ko nahi liya)
        bool exclude = find(arr, index + 1, target, dp);

        // Include (current element ko liya agar target >= arr[index] ho)
        bool include = false;
        if (target >= arr[index]) {
            include = find(arr, index + 1, target - arr[index], dp);
        }

        // Result ko DP table mein store karo (1 for true, 0 for false)
        return dp[index][target] = (exclude || include);
    }

public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        int n = arr.size();

        // dp table of size [n][sum + 1], initialised with -1
        vector<vector<int>> dp(n, vector<int>(sum + 1, -1));

        return find(arr, 0, sum, dp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna