class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();

        // first reverse the whole array
        reverse(nums.begin(), nums.end());

        // reverse only starting k position
        reverse(nums.begin(), nums.begin()+k);

        // reverse from k to last eleement
        reverse(nums.begin()+k, nums.end());
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna