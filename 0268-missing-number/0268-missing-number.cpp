class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum1=0;
        sum1=(n*(n+1))/2;


        int sum2=0;
        for(int i=0; i<n; i++)
        {
            sum2+=nums[i];
        } 
        int ans=sum1-sum2;

        return ans;       

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna