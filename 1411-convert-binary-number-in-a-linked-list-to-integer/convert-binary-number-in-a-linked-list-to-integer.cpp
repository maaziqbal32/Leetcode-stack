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
    int getDecimalValue(ListNode* head) {
        ListNode* p1=head;
        int n=0;
        while(p1!=nullptr){
            n++;
            p1=p1->next;
        }
        int sum=0;
        p1=head;
        while(p1!=nullptr)
        {
sum = sum + p1->val * static_cast<int>(std::pow(2, --n));           p1=p1->next;
        }
        return sum;
    }
};