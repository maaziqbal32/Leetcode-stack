#include <string>
#include <stack>
#include <algorithm>

class Solution {
public:
    std::string removeDuplicates(std::string s) {
        std::stack<char> st;
        for (char c : s) {
            if (!st.empty() && st.top() == c) {
                st.pop();
            } else {
                st.push(c);
            }
        }
        std::string ans;
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        std::reverse(ans.begin(), ans.end());
        return ans;
    }
};
