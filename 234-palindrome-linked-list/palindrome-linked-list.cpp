/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> palindrome;
        
        // Convert linked list to vector
        ListNode* current = head;
        while (current != nullptr) {
            palindrome.push_back(current->val);
            current = current->next;
        }
        
        // Check if the vector is a palindrome
        int n = palindrome.size();
        for (int i = 0; i < n / 2; ++i) {
            if (palindrome[i] != palindrome[n - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};
