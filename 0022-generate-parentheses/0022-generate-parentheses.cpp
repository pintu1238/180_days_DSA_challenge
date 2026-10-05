class Solution {
public:
    void parentheses(int n, int left, int right, vector<string>& ans, string& temp) {
        // Base case: jab total 2 * n brackets lag jayein
        if (left + right == 2 * n) {
            ans.push_back(temp);
            return;
        }

        // Choice 1: Opening bracket '(' add karna agar left < n ho
        if (left < n) {
            temp.push_back('(');
            parentheses(n, left + 1, right, ans, temp);
            temp.pop_back(); // Backtrack
        }

        // Choice 2: Closing bracket ')' add karna agar right < left ho
        if (right < left) {
            temp.push_back(')');
            parentheses(n, left, right + 1, ans, temp);
            temp.pop_back(); // Backtrack
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp = "";

        // left = 0, right = 0 se start karenge
        parentheses(n, 0, 0, ans, temp);

        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna