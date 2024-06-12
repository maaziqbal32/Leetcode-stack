/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    // Helper function to calculate the length of the list
    int getListLength(ListNode *head) {
        int length = 0;
        while (head != NULL) {
            length++;
            head = head->next;
        }
        return length;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = getListLength(headA);
        int lenB = getListLength(headB);

        // Align the start of both lists
        while (lenA > lenB) {
            lenA--;
            headA = headA->next;
        }
        while (lenB > lenA) {
            lenB--;
            headB = headB->next;
        }

        // Traverse both lists together to find the intersection point
        while (headA != headB) {
            headA = headA->next;
            headB = headB->next;
        }

        return headA;
    }
};
