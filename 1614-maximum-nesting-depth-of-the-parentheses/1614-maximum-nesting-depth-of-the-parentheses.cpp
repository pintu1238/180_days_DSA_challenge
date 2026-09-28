class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int result=0;

        for(char &ch : s){
            if(ch == '('){
                st.push(ch);
            }
            else if(ch == ')'){
                st.pop();
            }
            result= max(result, (int)st.size());
        }
        return result;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna